
undefined8 * FUN_100caaf30(long param_1,char *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  size_t sVar3;
  void *pvVar4;
  
  lVar1 = FUN_100c60010();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_100bf3540(0x18,"conf_api.c",0x119);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_100c5ffd0(lVar1);
    }
    else {
      sVar3 = _strlen(param_2);
      pvVar4 = (void *)FUN_100bf3540(sVar3 + 1 & 0xffffffff,"conf_api.c",0x11c);
      *puVar2 = pvVar4;
      if (pvVar4 != (void *)0x0) {
        _memcpy(pvVar4,param_2,(long)(int)(sVar3 + 1));
        puVar2[1] = 0;
        puVar2[2] = lVar1;
        lVar1 = FUN_100c60be0(*(undefined8 *)(param_1 + 0x10),puVar2);
        if (lVar1 != 0) {
          FUN_100bf2cd0("conf_api.c",0x124,"vv == NULL");
          return puVar2;
        }
        return puVar2;
      }
      FUN_100c5ffd0(lVar1);
      FUN_100bf3910(puVar2);
    }
  }
  return (undefined8 *)0x0;
}

