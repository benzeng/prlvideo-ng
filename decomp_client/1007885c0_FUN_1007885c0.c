
undefined8 FUN_1007885c0(long param_1,long *param_2)

{
  Node *pNVar1;
  int iVar2;
  void *pvVar3;
  Node *pNVar4;
  Node *pNVar5;
  long *plVar6;
  undefined8 uVar7;
  long local_80;
  Node *local_78;
  long local_70;
  long local_68;
  long local_60;
  QArrayData *local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  local_38 = 0;
  local_40 = *param_2;
  if (local_40 != 0) {
    _PrlHandle_AddRef();
  }
  SdkUtils::getHandleType(&local_40,&local_38);
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  local_50 = *param_2;
  if (local_50 != 0) {
    _PrlHandle_AddRef();
  }
  local_58 = (QArrayData *)QString::fromAscii_helper("statistics",10);
  SdkUtils::getParamByName(&local_48,&local_50,&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100788671;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100788671:
  if (local_50 != 0) {
    _PrlHandle_Free();
  }
  if (local_48 == 0) {
    return 1;
  }
  local_68 = local_48;
  _PrlHandle_AddRef();
  SdkUtils::getParamHandleValue(&local_60,&local_68,0);
  if (local_68 != 0) {
    _PrlHandle_Free();
  }
  if (local_60 != 0) {
    local_70 = local_60;
    _PrlHandle_AddRef();
    SdkUtils::getHandleType(&local_70,&local_38);
    if (local_70 != 0) {
      _PrlHandle_Free();
    }
    if (DAT_1023109d8 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_100785b00(pvVar3);
      DAT_10226c7e0 = 1;
      DAT_1023109d8 = pvVar3;
    }
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100785c40(&local_78,DAT_1023109d8,uVar7);
    pNVar4 = local_78;
    if (1 < *(uint *)(local_78 + 0x10)) {
      pNVar4 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)local_78,FUN_100787670,0x787660,
                                  0x18);
      if (*(int *)(local_78 + 0x10) != -1) {
        if (*(int *)(local_78 + 0x10) != 0) {
          LOCK();
          pNVar5 = local_78 + 0x10;
          *(int *)pNVar5 = *(int *)pNVar5 + -1;
          local_31 = *(int *)pNVar5 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100788796;
        }
        QHashData::free_helper((_func_void_Node_ptr *)local_78);
      }
    }
LAB_100788796:
    local_78 = pNVar4;
    iVar2 = *(int *)(local_78 + 0x20);
    pNVar4 = local_78;
    if (iVar2 != 0) {
      plVar6 = *(long **)(local_78 + 8);
      do {
        pNVar4 = (Node *)*plVar6;
        if ((Node *)*plVar6 != local_78) break;
        iVar2 = iVar2 + -1;
        plVar6 = plVar6 + 1;
        pNVar4 = local_78;
      } while (iVar2 != 0);
    }
    do {
      pNVar5 = local_78;
      if (1 < *(uint *)(local_78 + 0x10)) {
        pNVar5 = (Node *)QHashData::detach_helper
                                   ((_func_void_Node_ptr_void_ptr *)local_78,FUN_100787670,0x787660,
                                    0x18);
        if (*(int *)(local_78 + 0x10) != -1) {
          if (*(int *)(local_78 + 0x10) != 0) {
            LOCK();
            pNVar1 = local_78 + 0x10;
            *(int *)pNVar1 = *(int *)pNVar1 + -1;
            local_31 = *(int *)pNVar1 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100788836;
          }
          QHashData::free_helper((_func_void_Node_ptr *)local_78);
        }
      }
LAB_100788836:
      local_78 = pNVar5;
      if (pNVar4 == local_78) goto LAB_1007888b6;
      uVar7 = *(undefined8 *)(pNVar4 + 0x10);
      local_80 = local_60;
      if (local_60 != 0) {
        _PrlHandle_AddRef();
      }
      FUN_100786620(uVar7,&local_80);
      if (local_80 != 0) {
        _PrlHandle_Free();
      }
      pNVar4 = (Node *)QHashData::nextNode(pNVar4);
    } while( true );
  }
  goto LAB_1007888f4;
LAB_1007888b6:
  if (*(int *)(local_78 + 0x10) != -1) {
    if (*(int *)(local_78 + 0x10) != 0) {
      LOCK();
      pNVar4 = local_78 + 0x10;
      *(int *)pNVar4 = *(int *)pNVar4 + -1;
      local_31 = *(int *)pNVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007888e6;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_78);
  }
LAB_1007888e6:
  if (local_60 != 0) {
    _PrlHandle_Free();
  }
LAB_1007888f4:
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  return 1;
}

