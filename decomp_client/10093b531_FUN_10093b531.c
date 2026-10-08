
void FUN_10093b531(int *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  
  if (((*param_1 == 0x19) && (*(long *)(param_1 + 6) != 0)) && (**(int **)(param_1 + 6) == 2000)) {
    lVar2 = *(long *)(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    piVar5 = (int *)FUN_100920fff(*(undefined8 *)(param_2 + 0x40),*(undefined4 *)(lVar2 + 0x10),
                                  *(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20));
    if (piVar5 == (int *)0x0) {
      uVar1 = *(undefined4 *)(lVar2 + 0x10);
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      uVar4 = *(undefined8 *)(lVar2 + 0x18);
      uVar6 = FUN_10091a4ff(param_1);
      FUN_10091d89f(param_2,0xbbc,0,uVar6,"ref",uVar4,uVar3,uVar1,0);
    }
    else if (*piVar5 == 0x11) {
      *(int **)(param_1 + 6) = piVar5;
    }
    else {
      *(int **)(param_1 + 6) = piVar5;
    }
  }
  return;
}

