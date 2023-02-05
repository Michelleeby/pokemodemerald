struct PaletteOverride gTilesetPalOverrides_General[] = 
{
    { 
        .slot = 1, 
        .startHour = HOUR_NIGHT, 
        .endHour = HOUR_MORNING, 
        .palette = gTilesetPalOverride_General01,
    },
    {
        .slot = 5, 
        .startHour = HOUR_NIGHT, 
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_General05,
    },
    {
        .slot = 0xFF,
        .startHour = 0,
        .endHour = 0,
        .palette = NULL,
    },
};

struct PaletteOverride gTilesetPalOverrides_Petalburg[] =
{
    { 
        .slot = 6,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Petalburg06,
    },
    {
        .slot = 8,
        .startHour = HOUR_NIGHT,
        .endHour = HOUR_MORNING,
        .palette = gTilesetPalOverride_Petalburg08,
    },
    {
        .slot = 0xFF,
        .startHour = 0,
        .endHour = 0,
        .palette = NULL,
    },
};
