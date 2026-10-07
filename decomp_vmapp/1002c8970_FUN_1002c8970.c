
uint FUN_1002c8970(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  lVar3 = FUN_1007d87f0();
  if (*(long *)(param_1 + 0x1478) == 0) {
    *(long *)(param_1 + 0x1478) = lVar3;
    *(undefined4 *)(param_1 + 0x1480) = *(undefined4 *)(param_1 + 0x1484);
    uVar5 = 1;
  }
  else {
    uVar4 = (int)((ulong)(lVar3 - *(long *)(param_1 + 0x1478)) / 1000) + *(int *)(param_1 + 0x1480);
    uVar1 = *(uint *)(param_1 + 0x1484);
    uVar5 = uVar4 - uVar1;
    if (uVar4 < uVar1) {
      uVar5 = 0;
    }
    if (0x40 < uVar5) {
      if (param_2 == 0) {
        if (1 < DAT_1011c568c) {
          iVar2 = FUN_1008e38f0(&DAT_101116bc0);
          if (iVar2 != 0) {
            FUN_1008e3970("","USB",0,"TIMER OVERFLOW %u/%u",uVar5,*(undefined4 *)(param_1 + 0x1484))
            ;
          }
        }
        *(int *)(param_1 + 0x1480) = *(int *)(param_1 + 0x1484) + 0x20;
        *(long *)(param_1 + 0x1478) = lVar3;
        uVar5 = 0x20;
      }
      else if (200 < uVar5) {
        *(uint *)(param_1 + 0x1480) = uVar1 + 200;
        *(long *)(param_1 + 0x1478) = lVar3;
        uVar5 = 200;
      }
    }
  }
  return uVar5;
}

