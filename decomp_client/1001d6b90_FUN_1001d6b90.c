
void FUN_1001d6b90(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char local_40 [24];
  char *local_28;
  
  lVar1 = *param_2;
  if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
     (puVar2 = (undefined8 *)param_2[1], puVar2 != (undefined8 *)0x0)) {
    local_40[0] = '\x02';
    local_40[1] = '\0';
    local_40[2] = '\0';
    local_40[3] = '\0';
    local_40[0x14] = '\0';
    local_40[0x15] = '\0';
    local_40[0x16] = '\0';
    local_40[0x17] = '\0';
    local_40[0xc] = '\0';
    local_40[0xd] = '\0';
    local_40[0xe] = '\0';
    local_40[0xf] = '\0';
    local_40[0x10] = '\0';
    local_40[0x11] = '\0';
    local_40[0x12] = '\0';
    local_40[0x13] = '\0';
    local_40[4] = '\0';
    local_40[5] = '\0';
    local_40[6] = '\0';
    local_40[7] = '\0';
    local_40[8] = '\0';
    local_40[9] = '\0';
    local_40[10] = '\0';
    local_40[0xb] = '\0';
    local_28 = "default";
    puVar5 = (undefined8 *)0x0;
    if (*(int *)(lVar1 + 4) != 0) {
      puVar5 = puVar2;
    }
    (**(code **)*puVar2)();
    uVar3 = QMetaObject::className();
    uVar4 = QWidget::winId();
    QMessageLogger::debug(local_40,"New widget created: %p (%s), native id: %p",puVar5,uVar3,uVar4);
  }
  return;
}

