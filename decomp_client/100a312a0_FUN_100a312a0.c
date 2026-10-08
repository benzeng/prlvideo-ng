
void FUN_100a312a0(long param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long local_50;
  long *local_48;
  long local_40;
  undefined4 local_34;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 400) = param_2;
    *(int *)(param_1 + 0x194) = param_3;
  }
  else {
    *(undefined8 *)(param_1 + 400) = 0;
    local_34 = param_2;
    FUN_100a2ce90(param_1 + 0x188,&local_34);
    *(undefined4 *)(param_1 + 0x18c) = local_34;
    FUN_100a2e580(&local_50,param_1 + 0x188);
    _PasteboardSynchronize(*(undefined8 *)(param_1 + 0x20));
    iVar2 = _PasteboardClear(*(undefined8 *)(param_1 + 0x20));
    if (iVar2 == 0) {
      if (local_40 != 0) {
        if (0 < param_3) {
          plVar3 = local_48;
          lVar4 = 1;
LAB_100a31395:
          do {
            if (plVar3 != &local_50) {
              iVar2 = _PasteboardPutItemFlavor(*(undefined8 *)(param_1 + 0x20),lVar4,plVar3[2],0,0);
              if (iVar2 == 0) {
                plVar3 = (long *)plVar3[1];
                goto LAB_100a31395;
              }
              if (0 < DAT_10230ffd0) {
                FUN_100df99c0("CPTOOL","CPInterceptor",1);
              }
            }
            bVar1 = lVar4 < param_3;
            plVar3 = local_48;
            lVar4 = lVar4 + 1;
          } while (bVar1);
        }
        if (*(long *)(param_1 + 0x178) != *(long *)(param_1 + 0x170)) {
          *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x170);
        }
      }
    }
    else if (0 < DAT_10230ffd0) {
      FUN_100df99c0("CPTOOL","CPInterceptor",1,"PasteboardClear failed with status %d");
    }
    if (local_40 != 0) {
      lVar4 = *local_48;
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(local_50 + 8);
      **(long **)(local_50 + 8) = lVar4;
      local_40 = 0;
      while (local_48 != &local_50) {
        plVar3 = (long *)local_48[1];
        operator_delete(local_48);
        local_48 = plVar3;
      }
    }
  }
  return;
}

