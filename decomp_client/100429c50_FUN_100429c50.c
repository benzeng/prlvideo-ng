
void FUN_100429c50(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  
  if (param_2 == 0xc) {
    if (param_3 == 1) {
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else if (param_3 == 2) {
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else if ((param_3 == 8) && (*(int *)param_4[1] == 0)) {
      uVar3 = FUN_10042e3d0();
      *(undefined4 *)*param_4 = uVar3;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
switchD_100429c9d_default:
    return;
  }
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    FUN_10042a5f0(param_1);
    return;
  case 1:
    FUN_10042ad10(param_1,*(undefined4 *)param_4[1]);
    return;
  case 2:
    FUN_10042b1e0(param_1,*(undefined4 *)param_4[1]);
    return;
  case 3:
    FUN_10042b280(param_1,*(undefined1 *)param_4[1]);
    return;
  case 4:
  case 5:
    goto switchD_100429c9d_caseD_4;
  case 6:
    dVar1 = *(double *)param_4[1];
    QObject::blockSignals(SUB81(*(undefined8 *)(param_1 + 0x60),0));
    if (0.0 <= dVar1) {
      cVar4 = (char)(int)(dVar1 + DAT_100e110f0);
    }
    else {
      cVar4 = (char)(int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
              (char)(int)(DAT_100e110e0 + dVar1);
    }
    CMemorySlider::setMemoryValue((int)*(undefined8 *)(param_1 + 0x60),(bool)cVar4);
    uVar5 = (undefined1)*(undefined8 *)(param_1 + 0x60);
    break;
  case 7:
    iVar2 = *(int *)param_4[1];
    QObject::blockSignals(SUB81(*(undefined8 *)(param_1 + 0x50),0));
    QDoubleSpinBox::setValue((double)iVar2);
    uVar5 = (undefined1)*(undefined8 *)(param_1 + 0x50);
    break;
  case 8:
    FUN_10042b3a0(param_1,*(undefined8 *)param_4[1]);
    return;
  default:
    goto switchD_100429c9d_default;
  }
  QObject::blockSignals((bool)uVar5);
switchD_100429c9d_caseD_4:
  FUN_10042da70(param_1);
  return;
}

