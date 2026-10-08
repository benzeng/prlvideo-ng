
undefined8 * FUN_10072c070(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined *puVar4;
  char cVar5;
  QObject *pQVar6;
  undefined8 *puVar7;
  QObject *pQVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_90;
  long local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined *local_48;
  long local_40;
  uint local_38;
  undefined1 local_31;
  
  puVar4 = PTR_shared_null_1021e15e8;
  *param_1 = PTR_shared_null_1021e15e8;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  local_48 = puVar4;
  local_38 = 0;
  _PrlResult_GetParamsCount(lVar1,&local_38);
  if (local_38 != 0) {
    uVar9 = 0;
    do {
      local_40 = 0;
      _PrlResult_GetParamByIndex(lVar1,uVar9,&local_40);
      FUN_10014a450(&local_48,&local_40);
      if (local_40 != 0) {
        _PrlHandle_Free();
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < local_38);
  }
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  FUN_10014a970(&local_68,&local_48);
  puVar4 = PTR_shared_null_1021e1288;
  local_60 = (undefined8 *)(local_68 + 0x10 + (long)*(int *)(local_68 + 8) * 8);
  local_58 = (undefined8 *)(local_68 + 0x10 + (long)*(int *)(local_68 + 0xc) * 8);
  if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
    auVar10._8_4_ = (int)PTR_shared_null_1021e1288;
    auVar10._0_8_ = PTR_shared_null_1021e1288;
    auVar10._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    do {
      local_50 = 1;
      plVar2 = (long *)*local_60;
      pQVar6 = operator_new(0x18);
      QObject::QObject(pQVar6,(QObject *)0x0);
      *(undefined ***)pQVar6 = &PTR_FUN_102227290;
      puVar7 = operator_new(0x30);
      uStack_90 = auVar10._8_8_;
      *puVar7 = puVar4;
      puVar7[1] = uStack_90;
      puVar7[2] = puVar4;
      puVar7[3] = uStack_90;
      puVar7[4] = puVar4;
      puVar7[5] = uStack_90;
      *(undefined8 **)(pQVar6 + 0x10) = puVar7;
      pQVar8 = operator_new(0x18);
      *(QObject **)(pQVar8 + 0x10) = pQVar6;
      *(code **)(pQVar8 + 8) = FUN_10072cef0;
      *(undefined4 *)(pQVar8 + 4) = 1;
      *(undefined4 *)pQVar8 = 1;
      QtSharedPointer::ExternalRefCountData::setQObjectShared(pQVar8,SUB81(pQVar6,0));
      pcVar3 = *(code **)(*(long *)pQVar6 + 0x60);
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        _PrlHandle_AddRef();
      }
      cVar5 = (*pcVar3)(pQVar6);
      if (lVar1 != 0) {
        _PrlHandle_Free();
      }
      if (cVar5 != '\0') {
        FUN_10072cb00(param_1);
      }
      if (pQVar8 != (QObject *)0x0) {
        LOCK();
        pQVar6 = pQVar8 + 4;
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_31 = *(int *)pQVar6 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          (**(code **)(pQVar8 + 8))(pQVar8);
        }
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + -1;
        local_31 = *(int *)pQVar8 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(pQVar8);
        }
      }
      local_60 = local_60 + 1;
    } while (local_60 != local_58);
  }
  local_50 = 1;
  FUN_10014a540(&local_68);
  FUN_10014a540(&local_48);
  return param_1;
}

