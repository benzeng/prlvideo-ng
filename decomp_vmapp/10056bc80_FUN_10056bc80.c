
void FUN_10056bc80(long param_1,code *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  bool bVar9;
  
  uVar7 = param_1 + 0x1198;
  if ((uVar7 & 1) == 0) {
    QReadWriteLock::lockForRead();
    uVar7 = uVar7 | 1;
  }
  QMutex::lock();
  plVar1 = *(long **)(param_1 + 0x1298);
  if (plVar1 == (long *)(param_1 + 0x1298)) {
    if (*(long *)(param_1 + 0x12a8) != param_1 + 0x12a8) {
      FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "cd_list_empty(&m_DirtyStorages)","DiskStatesImp.cpp",0x52f,"AsyncFlushCache");
    }
    (*param_2)(param_3,0);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x12a0);
    puVar5 = _malloc(0x38);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_1008e3970("","vdisk",0,"Error: allocation problems");
      (*param_2)(param_3,0x80000002);
    }
    else {
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[4] = param_1;
      *(undefined4 *)(puVar5 + 5) = 0;
      *(undefined4 *)((long)puVar5 + 0x2c) = 0;
      *(undefined4 *)(puVar5 + 6) = 0;
      *(undefined8 **)(param_1 + 0x12a0) = puVar5;
      *puVar5 = (long *)(param_1 + 0x1298);
      puVar5[1] = plVar2;
      *plVar2 = (long)puVar5;
      if (((int)plVar2[5] != 0) || (plVar2[2] != 0)) {
        FUN_1008e3970("","vdisk",0,
                      "AsyncFlushCache: Fatal flush metadata override, FlushCallback = %p StorRunFlushCnt = %u"
                     );
        FUN_1007858f0(0,"AsyncFlushCache:");
        FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","0","DiskStatesImp.cpp",
                      0x543,"AsyncFlushCache");
      }
      plVar2[2] = (long)param_2;
      plVar2[3] = param_3;
      puVar5 = *(undefined8 **)(param_1 + 0x12a8);
      for (puVar8 = puVar5; puVar8 != (undefined8 *)(param_1 + 0x12a8);
          puVar8 = (undefined8 *)*puVar8) {
        if (((undefined8 *)puVar8[-2] == puVar8 + -2) &&
           ((iVar6 = *(int *)(puVar8 + 3), (long *)puVar8[2] == plVar2 ||
            (bVar9 = iVar6 == 0, iVar6 = 0, bVar9)))) {
          *(int *)(puVar8 + 3) = iVar6 + 1;
          *(int *)(plVar2 + 5) = (int)plVar2[5] + 1;
        }
      }
      bVar9 = false;
      while (puVar8 = puVar5, puVar8 != (undefined8 *)(param_1 + 0x12a8)) {
        puVar5 = (undefined8 *)*puVar8;
        if (((undefined8 *)puVar8[-2] == puVar8 + -2) &&
           (((long *)puVar8[2] == plVar2 || (*(int *)(puVar8 + 3) == 0)))) {
          (**(code **)(**(long **)(param_1 + 0x1290) + 0x10))
                    (*(long **)(param_1 + 0x1290),puVar8 + -0x27,FUN_10056bff0,plVar2);
          bVar9 = true;
        }
      }
      if (((plVar2 == plVar1) && (!bVar9)) && (*(int *)((long)plVar1 + 0x2c) == 0)) {
        lVar3 = *plVar1;
        plVar4 = (long *)plVar1[1];
        *(long **)(lVar3 + 8) = plVar4;
        *plVar4 = lVar3;
        *plVar1 = 0x112233;
        plVar1[1] = (long)&DAT_00445566;
        (*(code *)plVar2[2])(plVar2[3],(int)plVar1[6]);
        _free(plVar2);
      }
    }
  }
  QMutex::unlock();
  if ((uVar7 & 1) == 0) {
    return;
  }
  QReadWriteLock::unlock();
  return;
}

