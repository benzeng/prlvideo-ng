
size_t * FUN_1008ac49f(int param_1)

{
  int iVar1;
  size_t sVar2;
  uLong uVar3;
  char *pcVar4;
  size_t *local_228;
  xmlChar local_218 [512];
  uint local_18;
  size_t *local_10;
  
  local_10 = (size_t *)0x0;
  if ((param_1 < 1) || (9 < param_1)) {
    local_228 = (size_t *)0x0;
  }
  else {
    local_10 = (size_t *)(*(code *)_xmlMalloc)(0x88);
    if (local_10 == (size_t *)0x0) {
      FUN_1008ab1c7("creating buffer context");
      local_228 = (size_t *)0x0;
    }
    else {
      _memset(local_10,0,0x88);
      *local_10 = 0x8000;
      sVar2 = (*(code *)_xmlMalloc)(*local_10);
      local_10[2] = sVar2;
      if (local_10[2] == 0) {
        FUN_1008ac459(local_10);
        FUN_1008ab1c7("creating buffer");
        local_228 = (size_t *)0x0;
      }
      else {
        pcVar4 = "1.2.3";
        local_18 = _deflateInit2_((z_streamp)(local_10 + 3),param_1,8,-0xf,8,0,"1.2.3",0x70);
        if (local_18 == 0) {
          uVar3 = _crc32(0,(Bytef *)0x0,0);
          local_10[1] = uVar3;
          iVar1 = _snprintf((char *)local_10[2],*local_10,"%c%c%c%c%c%c%c%c%c%c",0x1f,0x8b,8,
                            (ulong)pcVar4 & 0xffffffff00000000,0,0,0,0,0,3);
          local_10[6] = local_10[2] + (long)iVar1;
          *(int *)(local_10 + 7) = (int)*local_10 - iVar1;
          local_228 = local_10;
        }
        else {
          FUN_1008ac459(local_10);
          local_10 = (size_t *)0x0;
          _xmlStrPrintf(local_218,500,(xmlChar *)"xmlCreateZMemBuff:  %s %d\n",
                        "Error initializing compression context.  ZLIB error:",(ulong)local_18);
          FUN_1008ab73e(0x60a,local_218);
          local_228 = (size_t *)0x0;
        }
      }
    }
  }
  return local_228;
}

