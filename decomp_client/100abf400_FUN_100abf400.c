
undefined8 FUN_100abf400(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  bool bVar2;
  
  uVar1 = *param_2;
  bVar2 = *param_1 < uVar1;
  if (*param_1 == uVar1) {
    uVar1 = (ulong)(uint)param_1[1];
    bVar2 = (uint)param_1[1] < (uint)param_2[1];
  }
  return CONCAT71((int7)(uVar1 >> 8),bVar2);
}

