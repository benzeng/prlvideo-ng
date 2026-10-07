
int FUN_1004db2b0(long param_1,undefined4 param_2,undefined8 param_3,void *param_4,code *param_5,
                 undefined8 param_6,uint *param_7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint local_44;
  void *local_40;
  uint local_34;
  
  cVar1 = FUN_1004e3380(*(undefined8 *)(param_1 + 0x20));
  iVar2 = -0xfffffee;
  if (cVar1 != '\0') {
    local_34 = 0;
    iVar2 = FUN_1004e3760(*(undefined8 *)(param_1 + 0x20),param_4,param_2,&local_34,param_3);
    if (iVar2 == 0) {
      local_40 = (void *)0x0;
      local_44 = 0;
      *param_7 = local_34;
      cVar1 = (*param_5)(param_6,&local_40,&local_44);
      iVar2 = 0;
      if ((cVar1 != '\0') && (local_34 != 0)) {
        do {
          uVar3 = local_34;
          if (local_44 < local_34) {
            uVar3 = local_44;
          }
          local_44 = uVar3;
          _memcpy(local_40,param_4,(ulong)uVar3);
          uVar4 = (ulong)local_44;
          local_34 = local_34 - local_44;
          cVar1 = (*param_5)(param_6,&local_40,&local_44);
          if (cVar1 == '\0') break;
          param_4 = (void *)((long)param_4 + uVar4);
        } while (local_34 != 0);
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

