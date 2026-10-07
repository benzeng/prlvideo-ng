
int FUN_1003e10b0(long *param_1,QString *param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (*(int *)(param_2->field0_0x0 + 4) != 0) {
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],param_2,1,1,0,0);
    uVar3 = (**(code **)(*(long *)param_1[6] + 0xb0))();
    *(undefined4 *)((long)param_1 + 0xc4) = uVar3;
    cVar1 = (**(code **)(*(long *)param_1[6] + 0x98))();
    if (cVar1 != '\0') {
      *(undefined4 *)((long)param_1 + 0x2c) = 1;
      QString::operator=((QString *)(param_1 + 4),param_2);
      lVar4 = (**(code **)(*param_1 + 0x70))(param_1);
      param_1[0x14] = lVar4;
      param_1[0x13] = lVar4 + 1;
    }
    *(undefined4 *)((long)param_1 + 0x7c) = 1;
    *(undefined4 *)((long)param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x11) = 1;
  }
  bVar2 = (**(code **)(*(long *)param_1[6] + 0x98))();
  return (int)((uint)(byte)~bVar2 << 0x1f) >> 0x1f;
}

