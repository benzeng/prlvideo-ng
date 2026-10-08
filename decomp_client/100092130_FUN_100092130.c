
void FUN_100092130(long param_1,int param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  QArrayData *local_58;
  char local_49;
  uint *local_48;
  uint *local_40;
  undefined1 local_31;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",3,"onPathsResolvedDropSlot");
  }
  if (param_2 == 0) {
    puVar4 = (uint *)*param_3;
    if (1 < *puVar4) {
      FUN_10003cb70(param_3,puVar4[1]);
      puVar4 = (uint *)*param_3;
    }
    puVar6 = puVar4 + (long)(int)puVar4[2] * 2 + 4;
    while( true ) {
      if (1 < *puVar4) {
        FUN_10003cb70(param_3,puVar4[1]);
        puVar4 = (uint *)*param_3;
      }
      if (puVar6 == puVar4 + (long)(int)puVar4[3] * 2 + 4) break;
      if ((*(byte *)(*(long *)puVar6 + 0x14) & 1) == 0) {
        puVar6 = puVar6 + 2;
      }
      else {
        local_48 = puVar6;
        FUN_100094e30(&local_40,param_3,&local_48);
        puVar4 = (uint *)*param_3;
        puVar6 = local_40;
      }
    }
    if (puVar4[3] == puVar4[2]) {
      *(undefined1 *)(param_1 + 0x28) = 0;
      return;
    }
    uVar3 = FUN_100319390(*(undefined8 *)(param_1 + 0x20));
    FUN_10018c2b0(uVar3);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    iVar2 = CVmCommonOptions::getOsType();
    if (iVar2 == 8) {
      FUN_100094f70(param_1 + 0x38);
      puVar4 = (uint *)*param_3;
      if (1 < *puVar4) {
        FUN_10003cb70(param_3,puVar4[1]);
        puVar4 = (uint *)*param_3;
      }
      puVar6 = puVar4 + (long)(int)puVar4[2] * 2 + 4;
      while( true ) {
        if (1 < *puVar4) {
          FUN_10003cb70(param_3,puVar4[1]);
          puVar4 = (uint *)*param_3;
        }
        if (puVar6 == puVar4 + (long)(int)puVar4[3] * 2 + 4) break;
        FUN_1000341d0(param_1 + 0x38,*(long *)puVar6 + 8);
        puVar6 = puVar6 + 2;
        puVar4 = (uint *)*param_3;
      }
      if (1 < *puVar4) {
        FUN_10003cb70(param_3,puVar4[1]);
        puVar4 = (uint *)*param_3;
      }
      puVar6 = puVar4 + (long)(int)puVar4[2] * 2 + 4;
      while( true ) {
        if (1 < *puVar4) {
          FUN_10003cb70(param_3,puVar4[1]);
          puVar4 = (uint *)*param_3;
        }
        uVar5 = puVar4[3];
        puVar7 = puVar4 + (long)(int)uVar5 * 2 + 4;
        if ((puVar6 == puVar4 + (long)(int)uVar5 * 2 + 4) ||
           (puVar7 = puVar6, *(int *)(*(long *)puVar6 + 0x10) != 0)) break;
        puVar6 = puVar6 + 2;
      }
      if (1 < *puVar4) {
        FUN_10003cb70(param_3,puVar4[1]);
        puVar4 = (uint *)*param_3;
        uVar5 = puVar4[3];
      }
      if (puVar7 != puVar4 + (long)(int)uVar5 * 2 + 4) {
        if (1 < *puVar4) {
          FUN_10003cb70(param_3,puVar4[1]);
          puVar4 = (uint *)*param_3;
        }
        puVar6 = puVar4 + (long)(int)puVar4[2] * 2 + 4;
        do {
          if (1 < *puVar4) {
            FUN_10003cb70(param_3,puVar4[1]);
            puVar4 = (uint *)*param_3;
          }
          puVar7 = puVar4 + (long)(int)puVar4[3] * 2 + 4;
          if (puVar6 == puVar4 + (long)(int)puVar4[3] * 2 + 4) goto LAB_10009244f;
          uVar3 = FUN_100319c30(*(undefined8 *)(param_1 + 0x20));
          local_58 = (QArrayData *)**(undefined8 **)puVar6;
          if (1 < *(int *)local_58 + 1U) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + 1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
          }
          FUN_10032fe90(uVar3,&local_58,&local_49);
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100092431;
            }
            QArrayData::deallocate(local_58,2,8);
          }
LAB_100092431:
          if ((local_49 == '\0') && (*(int *)(*(long *)puVar6 + 0x10) != 0))
          goto code_r0x000100092448;
          puVar6 = puVar6 + 2;
          puVar4 = (uint *)*param_3;
        } while( true );
      }
      uVar3 = 5;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  FUN_100092030(param_1,param_3,uVar3,param_4,param_5);
  return;
code_r0x000100092448:
  puVar4 = (uint *)*param_3;
  puVar7 = puVar6;
LAB_10009244f:
  if (1 < *puVar4) {
    FUN_10003cb70(param_3,puVar4[1]);
    puVar4 = (uint *)*param_3;
  }
  uVar5 = puVar4[3];
  cVar1 = FUN_100090550(param_1,1);
  if (puVar7 == puVar4 + (long)(int)uVar5 * 2 + 4) {
    if (((cVar1 != '\0') || (cVar1 = FUN_100090550(param_1,0), cVar1 != '\0')) ||
       (iVar2 = FUN_1000905c0(param_1,0), iVar2 == 1)) {
      uVar3 = 1;
      goto LAB_1000924fa;
    }
  }
  else if ((cVar1 != '\0') || (iVar2 = FUN_1000905c0(param_1,1), iVar2 == 1)) {
    uVar3 = 2;
    goto LAB_1000924fa;
  }
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    return;
  }
  uVar3 = 0;
LAB_1000924fa:
  FUN_100092030(param_1,param_3,uVar3,param_4,param_5);
  return;
}

