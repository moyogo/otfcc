#ifndef CARYLL_TABLES_LTSH_H
#define CARYLL_TABLES_LTSH_H

#include <support/util.h>
#include <font/caryll-sfnt.h>

typedef struct {
	uint16_t version;
	uint16_t numGlyphs;
	uint8_t *yPels;
} table_LTSH;

table_LTSH *caryll_read_LTSH(caryll_packet packet);
void caryll_delete_LTSH(table_LTSH *ltsh);
caryll_buffer *caryll_write_LTSH(table_LTSH *ltsh, const caryll_options *options);

#endif
