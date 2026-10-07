
uint FUN_100178f24(undefined8 *param_1,Bytef *param_2,uint param_3)

{
  int iVar1;
  uLong uVar2;
  xmlChar local_208 [500];
  int local_14;
  ulong local_10;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (Bytef *)0x0)) {
    *(uint *)(param_1 + 4) = param_3;
    param_1[3] = param_2;
    do {
      if (*(int *)(param_1 + 4) == 0) {
        uVar2 = _crc32(param_1[1],param_2,param_3);
        param_1[1] = uVar2;
        return param_3;
      }
      local_10 = (ulong)*(uint *)(param_1 + 4) / 5;
      if ((*(uint *)(param_1 + 7) <= local_10) &&
         (iVar1 = FUN_100178dca(param_1,*param_1), iVar1 == -1)) {
        return 0xffffffff;
      }
      local_14 = _deflate((z_streamp)(param_1 + 3),0);
    } while (local_14 == 0);
    _xmlStrPrintf(local_208,500,(xmlChar *)"xmlZMemBuffAppend:  %s %d %s - %d",
                  "Compression error while appending",(ulong)param_3,"bytes to buffer.  ZLIB error",
                  local_14);
    FUN_100177e16(0x60a,local_208);
  }
  return 0xffffffff;
}

