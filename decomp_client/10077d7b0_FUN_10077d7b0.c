
void FUN_10077d7b0(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0xc) {
    if (param_3 != 0) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    if (*(int *)param_4[1] != 0) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    *(undefined4 *)*param_4 = 2;
  }
  else if ((param_2 == 0) && (param_3 == 0)) {
    uVar1 = *(undefined4 *)param_4[1];
    param_1[0x19] = (QObject)0x1;
    param_1[0x18] = (QObject)((byte)((uint)uVar1 >> 0x1f) ^ 1);
    QMetaObject::activate(param_1,(QMetaObject *)&DAT_1021f6e90,0,(void **)0x0);
    return;
  }
  return;
}

