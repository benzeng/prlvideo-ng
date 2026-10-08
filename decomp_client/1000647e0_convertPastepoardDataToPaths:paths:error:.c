
/* Function Stack Size: 0x28 bytes */

char CServicesProvider::convertPastepoardDataToPaths_paths_error_
               (ID param_1,SEL param_2,ID param_3,QStringList *param_4,ID *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ID IVar7;
  long lVar8;
  ulong uVar9;
  QArrayData *local_110;
  undefined8 local_108;
  long lStack_100;
  long *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_b9;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar8;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_3,PTR_s_types_102269b18);
  puVar1 = PTR__NSFilenamesPboardType_1021e10c8;
  cVar3 = (*(code *)puVar2)(uVar4,PTR_s_containsObject__102268fc8,
                            *(undefined8 *)PTR__NSFilenamesPboardType_1021e10c8);
  if ((cVar3 == '\0') ||
     (lVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (param_3,PTR_s_dataForType__102269b20,*(undefined8 *)puVar1), lVar5 == 0)) {
    uVar4 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSBundle_10226a988,PTR_s_mainBundle_102269b28);
    cVar3 = '\0';
    IVar7 = (*(code *)puVar2)(uVar4,PTR_s_localizedStringForKey_value_tabl_102269b30,
                              &cf_Error_Pasteboarddoesn_tcontainaNSFilenamesPboardType_,&cf___,0);
    *param_5 = IVar7;
  }
  else {
    uVar4 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSPropertyListSerialization_10226a990,
                              PTR_s_propertyListWithData_options_for_102269b38,lVar5,0,0,0);
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = (long *)0x0;
    uStack_f0 = 0;
    local_108 = 0;
    lStack_100 = 0;
    uVar6 = (*(code *)puVar2)(uVar4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_108,
                              local_b8,0x10);
    puVar1 = PTR_s_QStringWithString__1022696d0;
    cVar3 = '\x01';
    if (uVar6 != 0) {
      lVar8 = *local_f8;
      do {
        uVar9 = 0;
        do {
          if (*local_f8 != lVar8) {
            _objc_enumerationMutation(uVar4);
          }
          _objc_msgSend_stret((undefined *)&local_110,(ID)PTR__OBJC_CLASS___NSString_10226a7c8,
                              puVar1,*(undefined8 *)(lStack_100 + uVar9 * 8));
          if (*(int *)(local_110 + 4) != 0) {
            FUN_1000341d0(param_4,&local_110);
          }
          if (*(int *)local_110 != -1) {
            if (*(int *)local_110 != 0) {
              LOCK();
              *(int *)local_110 = *(int *)local_110 + -1;
              local_b9 = *(int *)local_110 != 0;
              UNLOCK();
              if ((bool)local_b9) goto LAB_10006498d;
            }
            QArrayData::deallocate(local_110,2,8);
          }
LAB_10006498d:
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar6);
        uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                          (uVar4,PTR_s_countByEnumeratingWithState_obje_102269048,&local_108,
                           local_b8,0x10);
      } while (uVar6 != 0);
      lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
      cVar3 = '\x01';
    }
  }
  if (lVar8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar3;
}

