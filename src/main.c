
#include <genesis.h>
#include "resources.h" // Asegúrate de incluir el archivo de cabecera generado por rescomp

int main() {
    // Inicialización
    VDP_setScreenWidth320(); // Configura el ancho de pantalla a 320 píxeles
    VDP_setScreenHeight224(); // Configura el alto de pantalla a 224 píxeles

    // Carga de recursos (sprites, fondos, sonidos)
    VDP_loadTileSet(moon.tileset, 1, DMA); // Carga el tileset del fondo en la VRAM
    VDP_setPalette(PAL1, moon.palette->data); // Establece la paleta de colores para el fondo
    VDP_fillTileMapRect(BG_B, TILE_ATTR_FULL(PAL1, 0, FALSE, FALSE, 1), 0, 0, 40, 28); // Rellena el mapa de tiles con el tileset del fondo

    // Bucle principal del juego
    while(1) {
        // Manejo de entrada, actualización del estado del juego, etc.

        // Espera al VBlank (evita tearing)
        SYS_doVBlankProcess();
    }

    return 0;
}