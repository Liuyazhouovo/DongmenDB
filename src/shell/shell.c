#include <string.h>
#include <utils.h>
#include "shell.h"

void dongmendb_shell_init_ctx(dongmendb_shell_handle_sql_t *ctx)
{
    ctx->db = NULL;
    ctx->dbfile = NULL;

    ctx->header = false;
    ctx->mode = MODE_LIST;
}


