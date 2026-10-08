
QVariant * FUN_1007385c0(QVariant *param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 local_18;
  
  if (-1 < param_3) {
    lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x18);
    if (param_3 < *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8)) {
      local_18 = **(undefined8 **)(lVar1 + 0x10 + ((long)*(int *)(lVar1 + 8) + (long)param_3) * 8);
      QVariant::QVariant(param_1,0x27,&local_18,1);
      return param_1;
    }
  }
  (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
  (param_1->field0_0x0).field0_0x0.field7 = 0;
  return param_1;
}

