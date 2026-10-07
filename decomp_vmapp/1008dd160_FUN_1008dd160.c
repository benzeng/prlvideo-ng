
int FUN_1008dd160(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [48];
  
  local_60 = 0;
  if (*(long *)(param_1 + 0x40) == 0) {
    FUN_100887ce0(0x2e,0x98,0x86,"cms_sd.c",0x2c7);
    iVar3 = -1;
  }
  else {
    uVar1 = FUN_100821ab0(**(undefined8 **)(param_1 + 0x10));
    uVar4 = FUN_100821930(uVar1);
    lVar5 = FUN_100890b60(uVar4);
    iVar3 = -1;
    if (lVar5 != 0) {
      FUN_10088a650(local_50);
      iVar2 = FUN_100897930(local_50,local_58,lVar5,0,*(undefined8 *)(param_1 + 0x40));
      iVar3 = -1;
      if (0 < iVar2) {
        iVar2 = FUN_1008a52d0(*(undefined8 *)(param_1 + 0x18),&local_60,&DAT_100be88d8);
        if (local_60 != 0) {
          iVar2 = FUN_10088a910(local_50,local_60,(long)iVar2);
          FUN_10081e1a0(local_60);
          if (0 < iVar2) {
            iVar3 = FUN_100897a90(local_50,*(undefined8 *)(*(int **)(param_1 + 0x28) + 2),
                                  (long)**(int **)(param_1 + 0x28));
            if (iVar3 < 1) {
              FUN_100887ce0(0x2e,0x98,0x9e,"cms_sd.c",0x2df);
            }
          }
        }
      }
      FUN_10088aa50(local_50);
    }
  }
  return iVar3;
}

