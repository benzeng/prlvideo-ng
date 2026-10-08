
void FUN_1008f272a(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (((param_1 != (int *)0x0) && (*param_1 == 6)) && (*(long *)(param_1 + 0xe) != 0)) {
    iVar2 = FUN_1008f260a(*(undefined8 *)(param_1 + 10),param_1[0xc],*(undefined8 *)(param_1 + 0xe),
                          param_1[0x10]);
    if (iVar2 == -1) {
      uVar1 = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)(param_1 + 0xe) = uVar1;
      iVar2 = param_1[0xc];
      param_1[0xc] = param_1[0x10];
      param_1[0x10] = iVar2;
    }
  }
  return;
}

