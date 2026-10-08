
/* WARNING: Enum "enum_2029": Some values do not have unique names */

int FUN_100958280(int *param_1)

{
  int iVar1;
  xmlBufferPtr buf;
  int iVar2;
  int size;
  
  if ((*(long *)(param_1 + 0xc) != 0) && (*(long *)(*(long *)(param_1 + 0xc) + 0x20) != 0)) {
    iVar1 = param_1[6];
    param_1[6] = -1;
    buf = *(xmlBufferPtr *)(*(long *)(param_1 + 0xc) + 0x20);
    do {
      if (param_1[6] != -1) {
LAB_1009583c8:
        if (*param_1 == 1) {
          if ((((buf->alloc != XML_BUFFER_ALLOC_IMMUTABLE) && (0xfff < (uint)param_1[0x1b])) &&
              (buf->use - param_1[0x1b] < 0x201)) &&
             (iVar2 = _xmlBufferShrink(buf,param_1[0x1b]), -1 < iVar2)) {
            param_1[0x1b] = param_1[0x1b] - iVar2;
          }
        }
        else if ((*param_1 == 3) && (*param_1 != 5)) {
          iVar2 = _xmlParseChunk(*(xmlParserCtxtPtr *)(param_1 + 8),
                                 (char *)(buf->content + (uint)param_1[0x1b]),
                                 buf->use - param_1[0x1b],1);
          param_1[0x1b] = buf->use;
          *param_1 = 5;
          if ((iVar2 != 0) || (*(int *)(*(long *)(param_1 + 8) + 0x18) == 0)) {
            return -1;
          }
        }
        param_1[6] = iVar1;
        return 0;
      }
      if (buf->use < param_1[0x1b] + 0x200U) {
        if (*param_1 == 3) goto LAB_1009583c8;
        iVar2 = _xmlParserInputBufferRead(*(xmlParserInputBufferPtr *)(param_1 + 0xc),0x1000);
        if ((iVar2 == 0) && (buf->alloc == XML_BUFFER_ALLOC_IMMUTABLE)) {
          if (buf->use == param_1[0x1b]) {
            *param_1 = 3;
            param_1[6] = iVar1;
          }
        }
        else if (iVar2 < 0) {
          *param_1 = 3;
          param_1[6] = iVar1;
          if (iVar1 != 0) {
            return iVar2;
          }
          if (*(long *)(*(long *)(param_1 + 8) + 0x10) != 0) {
            return iVar2;
          }
        }
        else if (iVar2 == 0) {
          *param_1 = 3;
          goto LAB_1009583c8;
        }
      }
      if (buf->use < param_1[0x1b] + 0x200U) {
        size = buf->use - param_1[0x1b];
        iVar2 = _xmlParseChunk(*(xmlParserCtxtPtr *)(param_1 + 8),
                               (char *)(buf->content + (uint)param_1[0x1b]),size,0);
        param_1[0x1b] = param_1[0x1b] + size;
        if ((iVar2 != 0) || (*(int *)(*(long *)(param_1 + 8) + 0x18) == 0)) {
          return -1;
        }
        goto LAB_1009583c8;
      }
      iVar2 = _xmlParseChunk(*(xmlParserCtxtPtr *)(param_1 + 8),
                             (char *)(buf->content + (uint)param_1[0x1b]),0x200,0);
      param_1[0x1b] = param_1[0x1b] + 0x200;
    } while ((iVar2 == 0) && (*(int *)(*(long *)(param_1 + 8) + 0x18) != 0));
  }
  return -1;
}

