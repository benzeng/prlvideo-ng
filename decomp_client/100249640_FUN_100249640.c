
void FUN_100249640(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  QArrayData *local_38;
  undefined1 local_2a;
  
  pvVar2 = operator_new(0x18);
  FUN_100188480(&local_38,param_2);
  FUN_100249850(pvVar2,&local_38);
  cVar1 = FUN_10018f900(param_2);
  uVar3 = 0x800;
  if (cVar1 != '\0') {
    uVar3 = 0x1000;
  }
  FUN_100226550(param_1,pvVar2,param_2,uVar3,0,0,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_1002496e5;
      local_2a = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002496e5:
  *param_1 = &PTR_FUN_102203cb0;
  return;
}

