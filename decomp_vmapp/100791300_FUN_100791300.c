
void FUN_100791300(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((*param_2 != 0) && (puVar1 = *(undefined8 **)(*param_2 + 0x10), puVar1 != (undefined8 *)0x0))
  {
    uVar2 = *puVar1;
    *(undefined8 *)(param_1 + 0x18) = puVar1[1];
    *(undefined8 *)(param_1 + 0x10) = uVar2;
  }
  return;
}

