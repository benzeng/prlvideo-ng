
void FUN_10006c510(QObject *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021ed850;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  piVar1 = (int *)*param_4;
  *(int **)(param_1 + 0x20) = piVar1;
  if (*piVar1 != -1) {
    if (*piVar1 == 0) {
      QListData::detach((int)(param_1 + 0x20));
      lVar2 = *(long *)(param_1 + 0x20);
      lVar5 = (long)*(int *)(lVar2 + 8);
      lVar3 = *param_4;
      if ((lVar3 + (long)*(int *)(lVar3 + 8) * 8 != lVar2 + lVar5 * 8) &&
         (lVar6 = *(int *)(lVar2 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar5 * 8),
                (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar6 * 8);
      }
    }
    else {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  *(undefined8 *)(param_1 + 0x28) = param_5;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSWindow_10226aa00,PTR_s_alloc_102268b58);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (uVar4,PTR_s_initWithContentRect_styleMask_ba_102268b60,0,2,1,param_6,
             *(undefined8 *)PTR__NSZeroRect_1021e11b8,*(undefined8 *)(PTR__NSZeroRect_1021e11b8 + 8)
             ,*(undefined8 *)(PTR__NSZeroRect_1021e11b8 + 0x10),
             *(undefined8 *)(PTR__NSZeroRect_1021e11b8 + 0x18));
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setMovableByWindowBackground__102269d18,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setExcludedFromWindowsMenu__102269d20,1);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setOpaque__102268b68,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setHasShadow__102269d28,0);
  (*(code *)PTR__objc_msgSend_1021e1c68)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setIgnoresMouseEvents__102268b70,1);
  return;
}

