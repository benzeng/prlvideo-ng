
undefined1 FUN_100750130(long *param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined4 local_3c;
  long local_38;
  
  local_38 = -1;
  if (((((int)param_1[2] == 0) || ((int)param_1[1] == 0)) || (*(int *)((long)param_1 + 0xc) == 0))
     || (param_1[6] != 0)) {
    uVar3 = 0;
    FUN_1008e3970("","Compression",0,"CCompressionEngine::compress() invalid");
  }
  else {
    QMutex::lock();
    if ((DAT_1011ccb78 == '\0') &&
       (DAT_1011ccb78 = (**(code **)(*param_1 + 0x28))(param_1), DAT_1011ccb78 == '\0')) {
      uVar3 = 0;
      FUN_1008e3970("","Compression",0,"CCompressionEngine::init_engine() failed");
      QMutex::unlock();
    }
    else {
      QMutex::unlock();
      uVar3 = 0;
      cVar2 = FUN_10074fd10(param_1,0x31,0,FUN_100750020,0,0);
      if (cVar2 != '\0') {
        FUN_1008e3970("","Compression",0,"CCompressionEngine::compress() with %u workers",
                      (int)param_1[2]);
        lVar9 = 0;
        lVar10 = 0;
        do {
          local_3c = (undefined4)param_1[1];
          lVar4 = lVar9;
          lVar5 = lVar10;
          if ((lVar9 == 0) && (lVar4 = (**(code **)(*param_1 + 0x40))(param_1), lVar4 == 0)) {
            pcVar7 = "CCompressionEngine::compress() failed to allocate input buffer";
LAB_1007504e6:
            uVar3 = 0;
            FUN_1008e3970("","Compression",0,pcVar7);
            goto LAB_1007504f2;
          }
          if ((lVar10 == 0) &&
             (lVar5 = (**(code **)(*param_1 + 0x40))(param_1,*(undefined4 *)((long)param_1 + 0xc)),
             lVar5 == 0)) {
            pcVar7 = "CCompressionEngine::compress() failed to allocate output buffer";
            goto LAB_1007504e6;
          }
          cVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_1,&local_38,&local_3c,lVar4);
          if ((cVar2 == '\0') && (local_38 != -1)) {
            pcVar7 = "CCompressionEngine::compress() failed to get uncompressed data";
            goto LAB_1007504e6;
          }
          if (local_38 == -1) {
            if (*(int *)((long)param_1 + 0x14) == 0) {
              cVar2 = (**(code **)(*param_2 + 0x20))();
              if (cVar2 == '\0') {
                uVar3 = 0;
              }
              else {
                uVar3 = (**(code **)(*param_3 + 0x20))();
              }
              goto LAB_1007504f2;
            }
            if (2 < DAT_1011b55f8) {
              FUN_1008e3970("","Compression",3,
                            "CCompressionEngine::compress() EOF, but %u threads are still active");
            }
          }
          else if (*(int *)((long)param_1 + 0x14) != (int)param_1[2]) {
            for (plVar8 = (long *)param_1[5]; plVar8 != param_1 + 4; plVar8 = (long *)plVar8[1]) {
              if (*(char *)(plVar8[2] + 0x72) != '\0') {
                *(undefined1 *)(plVar8[2] + 0x72) = 0;
                QSemaphore::release((int)param_1 + 0x18);
                *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
              }
            }
          }
          lVar6 = FUN_10074fbd0(param_1);
          if (lVar6 == 0) {
LAB_1007504b1:
            uVar3 = 0;
            goto LAB_1007504f2;
          }
          if (*(char *)(lVar6 + 0x70) == '\0') {
            FUN_1008e3970("","Compression",0,"Compress failed %llu,%u->%u",
                          *(undefined8 *)(lVar6 + 0x48),*(undefined4 *)(lVar6 + 0x60),
                          *(undefined4 *)(lVar6 + 100));
            *(undefined1 *)(lVar6 + 0x72) = 1;
            *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
            goto LAB_1007504b1;
          }
          uVar1 = *(undefined4 *)(lVar6 + 100);
          lVar10 = *(long *)(lVar6 + 0x58);
          *(long *)(lVar6 + 0x58) = lVar5;
          lVar9 = *(long *)(lVar6 + 0x50);
          *(long *)(lVar6 + 0x50) = lVar4;
          lVar4 = *(long *)(lVar6 + 0x48);
          *(long *)(lVar6 + 0x48) = local_38;
          if (local_38 == -1) {
            *(undefined1 *)(lVar6 + 0x72) = 1;
            *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
            local_38 = lVar4;
          }
          else {
            *(undefined4 *)(lVar6 + 0x60) = local_3c;
            *(undefined4 *)(lVar6 + 100) = *(undefined4 *)((long)param_1 + 0xc);
            *(undefined1 *)(lVar6 + 0x71) = 1;
            local_38 = lVar4;
            QSemaphore::release((int)lVar6 + 0x40);
          }
        } while ((local_38 == -1) ||
                (cVar2 = (**(code **)(*param_3 + 0x18))(param_3,param_1,local_38,uVar1,lVar10),
                cVar2 != '\0'));
        uVar3 = 0;
        FUN_1008e3970("","Compression",0,
                      "CCompressionEngine::compress() failed to put compressed data %llu,%u",
                      local_38,uVar1);
        lVar4 = lVar9;
        lVar5 = lVar10;
LAB_1007504f2:
        FUN_1008e3970("","Compression",0,"CCompressionEngine::compress() completed res=%u",uVar3);
        FUN_10074ff00(param_1);
        if (lVar4 != 0) {
          (**(code **)(*param_1 + 0x48))(param_1,lVar4);
        }
        if (lVar5 != 0) {
          (**(code **)(*param_1 + 0x48))(param_1,lVar5);
        }
      }
    }
  }
  return uVar3;
}

