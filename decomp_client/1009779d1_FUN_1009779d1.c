
void FUN_1009779d1(long *param_1,undefined8 param_2)

{
  if (param_1 != (long *)0x0) {
    if ((*param_1 != 0) && (*(long *)(*param_1 + 0xb0) != 0)) {
      (**(code **)(*param_1 + 0xb0))(param_1[1],"%s: out of memory\n",param_2);
    }
    *(undefined4 *)(param_1 + 0x11) = 2;
    *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x14c) = 1;
  }
  return;
}

