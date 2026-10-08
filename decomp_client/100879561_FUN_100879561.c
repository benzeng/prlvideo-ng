
int FUN_100879561(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  undefined4 local_40;
  
  if (*(int *)(param_1 + 0x128) < *(int *)(param_1 + 300)) {
LAB_1008796a3:
    *(undefined8 *)(*(long *)(param_1 + 0x130) + (long)*(int *)(param_1 + 0x128) * 8) = param_2;
    *(undefined8 *)(param_1 + 0x120) = param_2;
    *(undefined8 *)(*(long *)(param_1 + 0x218) + (long)*(int *)(param_1 + 0x128) * 0x18) = param_3;
    *(undefined8 *)(*(long *)(param_1 + 0x218) + (long)*(int *)(param_1 + 0x128) * 0x18 + 8) =
         param_4;
    *(long *)(*(long *)(param_1 + 0x218) + (long)*(int *)(param_1 + 0x128) * 0x18 + 0x10) =
         (long)param_5;
    local_40 = *(int *)(param_1 + 0x128);
    *(int *)(param_1 + 0x128) = local_40 + 1;
  }
  else {
    *(int *)(param_1 + 300) = *(int *)(param_1 + 300) * 2;
    lVar1 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x130),(long)*(int *)(param_1 + 300) * 8);
    if (lVar1 == 0) {
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) / 2;
    }
    else {
      *(long *)(param_1 + 0x130) = lVar1;
      lVar1 = (*(code *)_xmlRealloc)
                        (*(undefined8 *)(param_1 + 0x218),(long)*(int *)(param_1 + 300) * 0x18);
      if (lVar1 != 0) {
        *(long *)(param_1 + 0x218) = lVar1;
        goto LAB_1008796a3;
      }
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) / 2;
    }
    _xmlErrMemory(param_1,0);
    local_40 = -1;
  }
  return local_40;
}

