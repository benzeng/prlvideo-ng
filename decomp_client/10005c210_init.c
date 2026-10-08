
/* Function Stack Size: 0x10 bytes */

ID SpeechRecognizerDelegate::init(ID param_1,SEL param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  int *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  int local_50;
  objc_super local_48;
  undefined1 local_31;
  
  local_48.super_class = (class_t *)PTR_SpeechRecognizerDelegate_10226abd0;
  local_48.receiver = param_1;
  IVar6 = _objc_msgSendSuper2(&local_48,PTR_s_init_102268ca8);
  puVar3 = PTR__objc_msgSend_1021e1c68;
  if (IVar6 != 0) {
    uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (PTR__OBJC_CLASS___NSMutableArray_10226a840,PTR_s_alloc_102268b58);
    uVar7 = (*(code *)puVar3)(uVar7,PTR_s_init_102268ca8);
    FUN_10005c440();
    FUN_10005e0d0(&local_70,&DAT_102311dd8);
    local_68 = local_70;
    if (*local_70 != -1) {
      if (*local_70 == 0) {
        QListData::detach((int)&local_68);
        iVar1 = local_68[2];
        if (iVar1 != local_68[3]) {
          local_70 = local_70 + (long)local_70[2] * 2 + 4;
          piVar10 = local_68 + (long)iVar1 * 2 + 4;
          lVar8 = (long)local_68[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = *(int **)local_70;
            *(int **)piVar10 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            piVar10 = piVar10 + 2;
            local_70 = local_70 + 2;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
      else {
        LOCK();
        *local_70 = *local_70 + 1;
        local_31 = *local_70 != 0;
        UNLOCK();
      }
    }
    local_60 = local_68 + (long)local_68[2] * 2 + 4;
    local_58 = local_68 + (long)local_68[3] * 2 + 4;
    local_50 = 1;
    FUN_100039a80(&local_70);
    puVar5 = PTR_s_addObject__1022692e8;
    puVar4 = PTR_s_stringWithQString__102268d00;
    if ((local_50 != 0) && (local_60 != local_58)) {
      do {
        uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(PTR__OBJC_CLASS___NSString_10226a7c8,puVar4);
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar7,puVar5,uVar9);
        local_60 = local_60 + 2;
        local_50 = 1;
      } while (local_60 != local_58);
    }
    FUN_100039a80(&local_68);
    uVar9 = (*(code *)puVar3)(PTR__OBJC_CLASS___NSSpeechRecognizer_10226a978,PTR_s_alloc_102268b58);
    uVar9 = (*(code *)puVar3)(uVar9,PTR_s_init_102268ca8);
    lVar8 = _recog;
    *(undefined8 *)(IVar6 + _recog) = uVar9;
    (*(code *)puVar3)(uVar9,PTR_s_setCommands__102269ac8,uVar7);
    (*(code *)puVar3)(*(undefined8 *)(IVar6 + lVar8),PTR_s_setDelegate__102268f50,IVar6);
    (*(code *)puVar3)(uVar7,PTR_s_release_1022699b8);
  }
  return IVar6;
}

