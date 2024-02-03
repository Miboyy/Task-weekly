#include <stdio.h>

struct Product {
    char name[50];
    float price;
    int stock;
};

struct Inventory {
    struct Product products[100];
    int num_products;
};

void add_product(struct Inventory *inventory);
void edit_product(struct Inventory *inventory);
void delete_product(struct Inventory *inventory);
void display_inventory(struct Inventory inventory);

int main() {
    struct Inventory inventory = {{}, 0};
    int choice;

    do {
        printf("\nAplikasi Manajemen Inventaris Toko\n");
        printf("1. Masukkan Data/Barang\n");
        printf("2. Edit Data Barang\n");
        printf("3. Hapus Data Barang\n");
        printf("4. Tampilkan Data\n");
        printf("0. Keluar\n");
        printf("Pilih perintah: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_product(&inventory);
                break;
            case 2:
                edit_product(&inventory);
                break;
            case 3:
                delete_product(&inventory);
                break;
            case 4:
                display_inventory(inventory);
                break;
            case 0:
                printf("Terimakasih telah menggunakan.\n");
                break;
            default:
                printf("ada yang salah dengan kamu...\n");
        }

    } while (choice != 0);

    return 0;
}

void add_product(struct Inventory *inventory) {
    if (inventory->num_products < 100) {
        struct Product new_product;
        
        printf("Masukkan nama barang: ");
        scanf("%s", new_product.name);

        printf("Masukkan harga barang: ");
        scanf("%f", &new_product.price);

        printf("Masukkan stok barang: ");
        scanf("%d", &new_product.stock);

        inventory->products[inventory->num_products] = new_product;
        inventory->num_products++;

        printf("Produk berhasil ditambahkan ke inventaris.\n");
    } else {
        printf("Inventaris sudah penuh, tidak dapat menambahkan produk.\n");
    }
}

void edit_product(struct Inventory *inventory) {
    int index;
    printf("Masukkan nomor produk yang akan diedit: ");
    scanf("%d", &index);

    // Adjust index to match array (starting from 0)
    index--;

    if (index >= 0 && index < inventory->num_products) {
        struct Product *product = &inventory->products[index];

        printf("Masukkan nama barang baru: ");
        scanf("%s", product->name);

        printf("Masukkan harga barang baru: ");
        scanf("%f", &product->price);

        printf("Masukkan stok barang baru: ");
        scanf("%d", &product->stock);

        printf("Data produk berhasil diubah.\n");
    } else {
        printf("Nomor produk tidak valid.\n");
    }
}

void delete_product(struct Inventory *inventory) {
    int index;
    printf("Masukkan nomor produk yang akan dihapus: ");
    scanf("%d", &index);

    // Adjust index to match array (starting from 0)
    index--;

    if (index >= 0 && index < inventory->num_products) {
        for (int i = index; i < inventory->num_products - 1; i++) {
            inventory->products[i] = inventory->products[i + 1];
        }
        inventory->num_products--;

        printf("Produk berhasil dihapus dari inventaris.\n");
    } else {
        printf("Nomor produk tidak valid.\n");
    }
}

void display_inventory(struct Inventory inventory) {
    printf("Daftar Produk:\n");
    printf("============================================\n");
    printf(" %-4s | %-20s | %-10s | %-5s\n", "No", "Nama Produk", "Harga", "Stok");
    printf("============================================\n");

    for (int i = 0; i < inventory.num_products; i++) {
        printf(" %-4d | %-20s | %-10.2f | %-5d\n", i + 1, inventory.products[i].name, inventory.products[i].price, inventory.products[i].stock);
    }
}
