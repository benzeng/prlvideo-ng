
void FUN_100618760(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  _func_void_Node_ptr *p_Var6;
  long lVar7;
  QArrayData *pQVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined4 uVar13;
  char *pcVar14;
  QArrayData *local_40;
  
  plVar9 = (long *)param_1[9];
  while (plVar9 != param_1 + 9) {
    if (DAT_1011cca60 != (undefined8 *)0x0) {
      puVar5 = DAT_1011cca60;
      puVar11 = &DAT_1011cca60;
      do {
        while (puVar10 = puVar5, iVar3 = FUN_1007ea6f0(puVar10 + 4,plVar9 + -4), iVar3 < 0) {
          puVar5 = (undefined8 *)puVar10[1];
          if ((undefined8 *)puVar10[1] == (undefined8 *)0x0) goto LAB_1006187f3;
        }
        puVar11 = puVar10;
        puVar5 = (undefined8 *)*puVar10;
      } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
LAB_1006187f3:
      if (((undefined8 **)puVar11 != &DAT_1011cca60) &&
         (iVar3 = FUN_1007ea6f0(plVar9 + -4,puVar11 + 4), -1 < iVar3)) {
        if ((int)plVar9[-1] != 0) {
          FUN_1008e3970("","prlplg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                        "Obj->InstancesCount == 0","PrlPlugins.cpp",0x7a,"FreeInterfaces");
        }
        puVar5 = puVar11;
        puVar10 = (undefined8 *)puVar11[1];
        if ((undefined8 *)puVar11[1] == (undefined8 *)0x0) {
          do {
            puVar4 = (undefined8 *)puVar5[2];
            bVar12 = (undefined8 *)*puVar4 != puVar5;
            puVar5 = puVar4;
          } while (bVar12);
        }
        else {
          do {
            puVar4 = puVar10;
            puVar10 = (undefined8 *)*puVar4;
          } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
        }
        if (DAT_1011cca58 == puVar11) {
          DAT_1011cca58 = puVar4;
        }
        DAT_1011cca68 = DAT_1011cca68 + -1;
        FUN_1000e86c0(DAT_1011cca60,puVar11);
        operator_delete(puVar11);
      }
    }
    lVar7 = *plVar9;
    plVar2 = (long *)plVar9[1];
    *(long **)(lVar7 + 8) = plVar2;
    *plVar2 = lVar7;
    *plVar9 = 0x112233;
    plVar9[1] = (long)&DAT_00445566;
    *(int *)(plVar9[-5] + 8) = *(int *)(plVar9[-5] + 8) + -1;
    p_Var6 = (_func_void_Node_ptr *)plVar9[-2];
    if (*(int *)(p_Var6 + 0x10) != -1) {
      if (*(int *)(p_Var6 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var6 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 != 0) goto LAB_100618780;
        p_Var6 = (_func_void_Node_ptr *)plVar9[-2];
      }
      QHashData::free_helper(p_Var6);
    }
LAB_100618780:
    operator_delete(plVar9 + -5);
    plVar9 = (long *)param_1[9];
  }
  if ((int)param_1[1] != 0) {
    pcVar14 = "UnloadPlugin";
    uVar13 = 0x91;
    FUN_1008e3970("","prlplg",0,"ASSERT( %s ) occured in %s:%d [%s]","!File->RefCnt",
                  "PrlPlugins.cpp",0x91,"UnloadPlugin");
    if ((int)param_1[1] != 0) {
      QString::toUtf8();
      FUN_1008e3970("","prlplg",0,"[Leak] File %s reference count is %u",
                    local_40 + *(long *)(local_40 + 0x10),(int)param_1[1],uVar13,pcVar14);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) goto LAB_1006189f9;
        }
        QArrayData::deallocate(local_40,1,8);
      }
    }
  }
LAB_1006189f9:
  lVar7 = param_1[7];
  plVar9 = (long *)param_1[8];
  *(long **)(lVar7 + 8) = plVar9;
  *plVar9 = lVar7;
  param_1[7] = 0x112233;
  param_1[8] = (long)&DAT_00445566;
  lVar7 = *param_1;
  if (lVar7 != 0) {
    if ((code *)param_1[4] != (code *)0x0) {
      (*(code *)param_1[4])();
      lVar7 = *param_1;
    }
    _dlclose(lVar7);
  }
  pQVar8 = (QArrayData *)param_1[2];
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      UNLOCK();
      if (*(int *)pQVar8 != 0) goto LAB_100618a63;
      pQVar8 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_100618a63:
  operator_delete(param_1);
  return;
}

