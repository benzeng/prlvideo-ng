
void FUN_100287ca0(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  long *plVar8;
  char cVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  bool bVar13;
  
  lVar4 = param_1[0x7421];
  do {
    if (lVar4 == 0) {
LAB_100287d38:
      plVar11 = param_1 + 0x7416;
      plVar5 = (long *)param_1[0x7416];
      if (plVar5 == plVar11) {
        FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                      "../Scsi/Lsi/dev.cpp",0x2fc,"req_take");
        FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","dev_req",
                      "../Scsi/Lsi/dev.cpp",0x373,"doorbell_request");
      }
      else {
        plVar8 = plVar5 + -0x13;
        lVar4 = *plVar5;
        plVar6 = (long *)plVar5[1];
        *(long **)(lVar4 + 8) = plVar6;
        *plVar6 = lVar4;
        *plVar5 = (long)plVar5;
        plVar5[1] = (long)plVar5;
        lVar4 = param_1[0x13];
        plVar5[-2] = lVar4 + 0x10b0;
        plVar5[-1] = 0;
        plVar5[-0x13] = 4;
        *(undefined4 *)((long)plVar5 + 0x3c) = 0;
        *(undefined4 *)(plVar5 + 8) = 0;
        *(undefined1 *)((long)plVar5 + 0x2a) = 0;
        *(undefined1 *)((long)plVar5 + 0x34) = 0;
        *(undefined1 *)((long)plVar5 + 0x35) = 0;
        plVar5[-0x11] = 0;
        plVar5[-0x12] = 0;
        *(undefined1 *)(plVar5 + 5) = 0;
        plVar5[4] = 0;
        plVar5[3] = 0;
        plVar5[2] = 0;
        if (*(char *)(lVar4 + 0x10b3) == '\x01') {
          if ((*(byte *)(param_1[0x13] + 0x1087) & 8) != 0) {
            *(undefined1 *)(param_1[0x13] + 0x1133) = 1;
          }
          cVar9 = FUN_10028dd00(param_1,plVar8);
          if (cVar9 != '\0') {
            cVar9 = FUN_1002878f0(param_1,plVar8);
            if (cVar9 != '\0') {
              FUN_100287ba0();
              return;
            }
            FUN_100287ac0(param_1,plVar8);
            return;
          }
          param_1[0x7415] = (long)plVar8;
        }
        else {
          (**(code **)(*param_1 + 0x88))(param_1,plVar8);
          _memcpy((void *)(param_1[0x13] + 0x1130),plVar5 + -0x12,
                  (ulong)*(byte *)((long)plVar5 + -0x8e) << 2);
          *(long *)(param_1[0x7427] + 0xf0) = *(long *)(param_1[0x7427] + 0xf0) + 1;
          lVar4 = param_1[0x13];
          uVar3 = *(uint *)(param_1 + 0x12);
          uVar12 = (ulong)(uVar3 >> 5);
          uVar10 = *(uint *)(lVar4 + 0x1080 + uVar12 * 4);
          do {
            puVar1 = (uint *)(lVar4 + 0x1080 + uVar12 * 4);
            LOCK();
            uVar2 = *puVar1;
            bVar13 = uVar10 == uVar2;
            if (bVar13) {
              *puVar1 = 1 << ((byte)uVar3 & 0x1f) | uVar10;
              uVar2 = uVar10;
            }
            uVar10 = uVar2;
            UNLOCK();
          } while (!bVar13);
          if ((uVar10 >> ((ulong)*(byte *)(param_1 + 0x12) & 0x3f) & 1) == 0) {
            FUN_1002effe0(DAT_1011c3ca8);
          }
          pvVar7 = (void *)plVar5[-1];
          if (pvVar7 != (void *)0x0) {
            FUN_10008d3f0(pvVar7);
            operator_delete(pvVar7);
          }
          lVar4 = *plVar5;
          plVar8 = (long *)plVar5[1];
          *(long **)(lVar4 + 8) = plVar8;
          *plVar8 = lVar4;
          lVar4 = *plVar11;
          *(long **)(lVar4 + 8) = plVar5;
          *plVar5 = lVar4;
          plVar5[1] = (long)plVar11;
          *plVar11 = (long)plVar5;
        }
      }
      return;
    }
    if (*(long *)(lVar4 + -0xa8) == 4) {
      FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "rb_search_node(&m_mframes_rb, __mf_cmp_fn, pa) == NULL","../Scsi/Lsi/dev.cpp",
                    0x36d,"doorbell_request");
      goto LAB_100287d38;
    }
    plVar11 = (long *)(lVar4 + 8);
    if (4 - *(long *)(lVar4 + -0xa8) < 0) {
      plVar11 = (long *)(lVar4 + 0x10);
    }
    lVar4 = *plVar11;
  } while( true );
}

