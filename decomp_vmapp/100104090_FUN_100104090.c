
void FUN_100104090(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1007dd120(param_2);
  FUN_1008e3970("","vm",0,"vm problem report data collection completed with result %s",uVar1);
  if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
     (*(long *)(param_1 + 0x40) != 0)) {
    QTimer::stop();
  }
  QObject::deleteLater();
  return;
}

