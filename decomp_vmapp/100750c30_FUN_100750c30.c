
undefined1 FUN_100750c30(long *param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  long local_58;
  long local_40;
  undefined4 local_34;
  
  local_40 = -1;
  if (((((int)param_1[2] == 0) || ((int)param_1[1] == 0)) || (*(int *)((long)param_1 + 0xc) == 0))
     || (param_1[6] != 0)) {
    uVar4 = 0;
    FUN_1008e3970("","Compression",0,"CCompressionEngine::compress() invalid");
  }
  else {
    QMutex::lock();
    if ((DAT_1011ccb78 == '\0') &&
       (DAT_1011ccb78 = (**(code **)(*param_1 + 0x28))(param_1), DAT_1011ccb78 == '\0')) {
      uVar4 = 0;
      FUN_1008e3970("","Compression",0,"CCompressionEngine::init_engine() failed");
      QMutex::unlock();
    }
    else {
      QMutex::unlock();
      uVar4 = 0;
      cVar3 = FUN_10074fd10(param_1,0x31,0,FUN_100750070,0,param_2);
      if (cVar3 != '\0') {
        FUN_1008e3970("","Compression",0,"CCompressionEngine::compress() with %u workers",
                      (int)param_1[2]);
        local_34 = (undefined4)param_1[1];
        lVar5 = (**(code **)(*param_2 + 0x10))(param_2,param_1,&local_40,&local_34);
        local_58 = 0;
        bVar9 = local_40 == -1;
        if ((lVar5 != 0) || (local_40 == -1)) {
          local_58 = 0;
          do {
            if (bVar9) {
              if (*(int *)((long)param_1 + 0x14) == 0) {
                uVar4 = (**(code **)(*param_3 + 0x20))();
                goto LAB_100751071;
              }
              if (2 < DAT_1011b55f8) {
                FUN_1008e3970("","Compression",3,
                              "CCompressionEngine::compress() EOF, but %u threads are still active")
                ;
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
            lVar6 = local_58;
            if ((local_58 == 0) &&
               (lVar6 = (**(code **)(*param_1 + 0x40))(param_1,*(undefined4 *)((long)param_1 + 0xc))
               , lVar6 == 0)) {
              FUN_1008e3970("","Compression",0,
                            "CCompressionEngine::compress() failed to allocate output buffer");
              local_58 = lVar6;
LAB_100751069:
              uVar4 = 0;
              goto LAB_100751071;
            }
            lVar7 = FUN_10074fbd0(param_1);
            local_58 = lVar6;
            if (lVar7 == 0) goto LAB_100751069;
            if (*(char *)(lVar7 + 0x70) == '\0') {
              uVar4 = 0;
              FUN_1008e3970("","Compression",0,"Compress from buffer failed %llu,%u->%u",
                            *(undefined8 *)(lVar7 + 0x48),*(undefined4 *)(lVar7 + 0x60),
                            *(undefined4 *)(lVar7 + 100));
              *(undefined1 *)(lVar7 + 0x72) = 1;
              *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
              goto LAB_100751071;
            }
            uVar1 = *(undefined4 *)(lVar7 + 100);
            local_58 = *(long *)(lVar7 + 0x58);
            *(long *)(lVar7 + 0x58) = lVar6;
            lVar6 = *(long *)(lVar7 + 0x50);
            *(long *)(lVar7 + 0x50) = lVar5;
            uVar2 = *(undefined4 *)(lVar7 + 0x60);
            *(undefined4 *)(lVar7 + 0x60) = local_34;
            lVar5 = *(long *)(lVar7 + 0x48);
            *(long *)(lVar7 + 0x48) = local_40;
            local_34 = uVar2;
            if (local_40 == -1) {
              *(undefined1 *)(lVar7 + 0x72) = 1;
              *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + -1;
              local_40 = lVar5;
            }
            else {
              *(undefined4 *)(lVar7 + 100) = *(undefined4 *)((long)param_1 + 0xc);
              *(undefined1 *)(lVar7 + 0x71) = 1;
              local_40 = lVar5;
              QSemaphore::release((int)lVar7 + 0x40);
            }
            if (local_40 != -1) {
              cVar3 = (**(code **)(*param_3 + 0x18))(param_3,param_1,local_40,uVar1,local_58);
              if (cVar3 == '\0') {
                uVar4 = 0;
                FUN_1008e3970("","Compression",0,
                              "CCompressionEngine::compress() failed to put compressed data %llu,%u"
                              ,local_40,uVar1);
                lVar5 = lVar6;
                goto LAB_100751071;
              }
              (**(code **)(*param_2 + 0x18))(param_2,param_1,local_40,local_34,lVar6);
            }
            local_34 = (undefined4)param_1[1];
            lVar5 = (**(code **)(*param_2 + 0x10))(param_2,param_1,&local_40,&local_34);
            bVar9 = local_40 == -1;
          } while ((lVar5 != 0) || (local_40 == -1));
        }
        uVar4 = 0;
        FUN_1008e3970("","Compression",0,"CCompressionEngine::compress() failed to get input buffer"
                     );
LAB_100751071:
        FUN_1008e3970("","Compression",0,"CCompressionEngine::compress() completed res=%u",uVar4);
        (**(code **)(*param_2 + 0x20))(param_2,param_1,param_3,uVar4,FUN_100751100,0);
        FUN_10074ff00(param_1);
        if (lVar5 != 0) {
          (**(code **)(*param_2 + 0x18))(param_2,param_1,local_40,local_34,lVar5);
        }
        if (local_58 != 0) {
          (**(code **)(*param_1 + 0x48))(param_1);
        }
      }
    }
  }
  return uVar4;
}

