
void FUN_10006bc40(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_38;
  undefined8 local_34;
  undefined2 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined2 local_1c;
  
  uVar5 = MacUtils::getWindowRef(*(QWidget **)(param_1 + 0x10));
  cVar2 = FUN_1001756c0(0x12);
  if (cVar2 != '\0') {
    iVar3 = FUN_10036c900(*(undefined8 *)(param_1 + 0x10));
    if (iVar3 == 1) {
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar4 = FUN_1001902a0(uVar6);
      if (uVar4 == 0) {
        QColor::invalidate();
      }
      else {
        QColor::setRgb((int)&local_28,uVar4 >> 0x10 & 0xff,uVar4 >> 8 & 0xff,uVar4 & 0xff);
      }
      puVar1 = PTR__objc_msgSend_1021e1c68;
      local_38 = local_28;
      local_2c = local_1c;
      local_34 = local_24;
      uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (PTR__OBJC_CLASS___NSColor_10226a890,PTR_s_colorWithQColor__102269d08,
                         &local_38);
      (*(code *)puVar1)(uVar5,PTR_s_setBorderColor__102269d10,uVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bcc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_setBorderColor__102269d10,0);
  return;
}

