
undefined8 * FUN_100473c40(undefined8 *param_1,QString *param_2)

{
  int *piVar1;
  int *piVar2;
  
  FUN_1004795a0();
  piVar1 = (int *)*param_1;
  piVar2 = (int *)0x0;
  if ((piVar1 != (int *)0x0) && (piVar2 = piVar1, *piVar1 != 1)) {
    FUN_100031c40(param_1);
    piVar2 = (int *)*param_1;
  }
  QString::operator=((QString *)(piVar2 + 2),param_2);
  piVar1 = (int *)0x0;
  if ((piVar2 != (int *)0x0) && (piVar1 = piVar2, *piVar2 != 1)) {
    FUN_100031c40(param_1);
    piVar1 = (int *)*param_1;
  }
  piVar1[0xe] = 0;
  piVar1[0xf] = 0;
  piVar1[0xc] = 0;
  piVar1[0xd] = 0;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  piVar1[8] = 0;
  piVar1[9] = 0;
  piVar1[6] = 0;
  piVar1[7] = 0;
  return param_1;
}

