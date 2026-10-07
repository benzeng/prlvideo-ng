
void FUN_100686190(long param_1,QString *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  QString *pQVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_1 + 0x18) = param_3;
  pQVar2 = (QString *)QString::operator=((QString *)(param_1 + 0x30),param_2);
  QString::operator=((QString *)(param_1 + 0x10),pQVar2);
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    lVar3 = (**(code **)(**(long **)(param_1 + 0x40) + 0x20))();
    lVar4 = (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
    *(long *)(param_1 + 0x20) = lVar3 - lVar4;
    uVar1 = (**(code **)(**(long **)(param_1 + 0x40) + 0x28))();
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    uVar5 = (**(code **)(**(long **)(param_1 + 0x40) + 0x30))();
    *(undefined8 *)(param_1 + 0x38) = uVar5;
  }
  return;
}

