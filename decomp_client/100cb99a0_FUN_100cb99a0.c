
int FUN_100cb99a0(long param_1)

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
    FUN_100c62ee0(0x2e,0x98,0x86,"cms_sd.c",0x2c7);
    iVar3 = -1;
  }
  else {
    uVar1 = FUN_100bf7220(**(undefined8 **)(param_1 + 0x10));
    uVar4 = FUN_100bf70a0(uVar1);
    lVar5 = FUN_100c6bd60(uVar4);
    iVar3 = -1;
    if (lVar5 != 0) {
      FUN_100c65850(local_50);
      iVar2 = FUN_100c72eb0(local_50,local_58,lVar5,0,*(undefined8 *)(param_1 + 0x40));
      iVar3 = -1;
      if (0 < iVar2) {
        iVar2 = FUN_100c80850(*(undefined8 *)(param_1 + 0x18),&local_60,&DAT_102258ee8);
        if (local_60 != 0) {
          iVar2 = FUN_100c65b10(local_50,local_60,(long)iVar2);
          FUN_100bf3910(local_60);
          if (0 < iVar2) {
            iVar3 = FUN_100c73010(local_50,*(undefined8 *)(*(int **)(param_1 + 0x28) + 2),
                                  (long)**(int **)(param_1 + 0x28));
            if (iVar3 < 1) {
              FUN_100c62ee0(0x2e,0x98,0x9e,"cms_sd.c",0x2df);
            }
          }
        }
      }
      FUN_100c65c50(local_50);
    }
  }
  return iVar3;
}

