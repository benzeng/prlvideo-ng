
undefined8 FUN_100615920(char param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  QArrayData *pQVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  bool bVar9;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar6 = DAT_1011cca58;
  if (DAT_1011cca58 != &DAT_1011cca60) {
    do {
      puVar2 = (undefined8 *)puVar6[6];
      if ((param_1 == '\0') || (*(long *)*puVar2 != 0)) {
        iVar4 = *(int *)(puVar2 + 4);
        if (iVar4 < 0) {
          FUN_1008e3970("","prlplg",0,"ASSERT( %s ) occured in %s:%d [%s]","Inf->InstancesCount>=0",
                        "PrlPlugins.cpp",0xb9,"__ArePluginsBusy");
          iVar4 = *(int *)(puVar2 + 4);
        }
        if (iVar4 != 0) {
          FUN_1007d6a70(&local_48,puVar2 + 1);
          QString::toUtf8();
          pQVar5 = local_40;
          lVar3 = *(long *)(local_40 + 0x10);
          uVar1 = *(undefined4 *)(puVar2 + 4);
          QString::toUtf8();
          FUN_1008e3970("","prlplg",0,
                        "Unable to unload plugin. It is now being used. Id = %s, Count = %d, File = %s"
                        ,pQVar5 + lVar3,uVar1,local_50 + *(long *)(local_50 + 0x10));
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100615ccc;
            }
            QArrayData::deallocate(local_50,1,8);
          }
LAB_100615ccc:
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100615cfc;
            }
            QArrayData::deallocate(local_40,1,8);
          }
LAB_100615cfc:
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              UNLOCK();
              if (*(int *)local_48 != 0) {
                return 0x80044230;
              }
              local_31 = 0;
            }
            QArrayData::deallocate(local_48,2,8);
          }
          return 0x80044230;
        }
      }
      puVar2 = (undefined8 *)puVar6[1];
      if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
        do {
          puVar8 = (undefined8 *)puVar6[2];
          bVar9 = (undefined8 *)*puVar8 != puVar6;
          puVar6 = puVar8;
        } while (bVar9);
      }
      else {
        do {
          puVar8 = puVar2;
          puVar2 = (undefined8 *)*puVar8;
        } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
      }
      puVar6 = puVar8;
    } while (puVar8 != &DAT_1011cca60);
  }
  pQVar5 = (QArrayData *)QString::fromAscii_helper("UnloadAllPlugins: 1",0x13);
  puVar6 = DAT_1011cca28;
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      puVar6 = DAT_1011cca28;
      if ((bool)local_31) goto LAB_100615a65;
    }
    QArrayData::deallocate(pQVar5,2,8);
    puVar6 = DAT_1011cca28;
  }
LAB_100615a65:
  while ((undefined8 **)puVar6 != &DAT_1011cca28) {
    puVar2 = (undefined8 *)*puVar6;
    plVar7 = puVar6 + -7;
    puVar6 = puVar2;
    if ((param_1 == '\0') || (*plVar7 != 0)) {
      FUN_100618760();
    }
  }
  pQVar5 = (QArrayData *)QString::fromAscii_helper("UnloadAllPlugins: 2 - after unload",0x22);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100615abd;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100615abd:
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","prlplg",3,"UnloadAllPlugins: s_Plugins.Objs.size() %zu",DAT_1011cca68);
  }
  if (DAT_1011cca58 != &DAT_1011cca60) {
    puVar6 = DAT_1011cca58;
    do {
      if (2 < DAT_1011b55f8) {
        FUN_1007d6a70(&local_60,puVar6 + 4);
        QString::toUtf8();
        FUN_1008e3970("","prlplg",3,"UnloadAllPlugins: uuid=%s, instancesCount = %d",
                      local_58 + *(long *)(local_58 + 0x10),*(undefined4 *)(puVar6[6] + 0x20));
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100615ba1;
          }
          QArrayData::deallocate(local_58,1,8);
        }
LAB_100615ba1:
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100615be0;
          }
          QArrayData::deallocate(local_60,2,8);
        }
      }
LAB_100615be0:
      puVar2 = (undefined8 *)puVar6[1];
      if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
        do {
          puVar8 = (undefined8 *)puVar6[2];
          bVar9 = (undefined8 *)*puVar8 != puVar6;
          puVar6 = puVar8;
        } while (bVar9);
      }
      else {
        do {
          puVar8 = puVar2;
          puVar2 = (undefined8 *)*puVar8;
        } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
      }
      puVar6 = puVar8;
    } while (puVar8 != &DAT_1011cca60);
  }
  return 0;
}

