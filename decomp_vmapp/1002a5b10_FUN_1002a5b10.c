
undefined8 FUN_1002a5b10(ulong *param_1,ulong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if ((((*(byte *)((long)param_1 + 0xc) & 1) != 0) && (param_2 <= (uint)param_1[1])) &&
     (3 < (uint)param_1[1] - param_2)) {
    uVar2 = (ulong)(uint)((int)*param_1 + (int)param_2) & 0xfff;
    uVar1 = 0;
    if (3 < 0x1000 - uVar2) {
      *(undefined4 *)
       (*(long *)((long)param_1 + ((*param_1 & 0xfff) + param_2 >> 8 & 0xfffffffffffff0) + 0x20) +
       uVar2) = param_3;
      uVar1 = 4;
    }
  }
  return uVar1;
}

