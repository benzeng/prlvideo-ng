
void FUN_100298340(long *param_1,uint param_2)

{
  ulong *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  byte bVar7;
  char cVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  
  uVar20 = ~*(uint *)((long)param_1 + 0x1014) & param_2;
  if (uVar20 != 0) {
    lVar5 = param_1[0x203];
    uVar18 = 0xffffffff;
    do {
      while( true ) {
        uVar14 = 0;
        if (uVar20 != 0) {
          for (; (uVar20 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
          }
        }
        if (uVar20 == 0) {
          uVar14 = 0xffffffff;
        }
        uVar16 = 1 << ((byte)uVar14 & 0x1f);
        uVar10 = (ulong)uVar14;
        lVar19 = uVar10 * 0x78;
        lVar11 = uVar10 * 0x20;
        param_1[uVar10 * 0xf + 0x1b] = lVar5 + lVar11;
        if (((*(uint *)(lVar5 + lVar11) >> 0xc & 0xffff0) + 0x80 <
             *(uint *)(param_1 + uVar10 * 0xf + 0x20)) ||
           (param_1[uVar10 * 0xf + 0x1f] !=
            CONCAT44(*(undefined4 *)(lVar5 + 0xc + lVar11),*(undefined4 *)(lVar5 + 8 + lVar11)))) {
          FUN_10008d2d0(param_1 + uVar10 * 0xf + 0x1e);
        }
        uVar17 = ~uVar16 & uVar20;
        puVar1 = (ulong *)(param_1 + uVar10 * 0xf + 0x12);
        puVar6 = (undefined1 *)param_1[uVar10 * 0xf + 0x1e];
        bVar7 = puVar6[2] & 0xfe;
        puVar2 = (undefined1 *)((long)param_1 + lVar19 + 0x9c);
        pcVar3 = (char *)((long)param_1 + lVar19 + 0x9e);
        *(bool *)((long)param_1 + lVar19 + 0x9e) =
             (*(uint *)(param_1[0x1ff] + 0x34) & uVar16) != 0 && bVar7 == 0x60;
        plVar4 = param_1 + uVar10 * 0xf + 0x15;
        if ((long *)param_1[uVar10 * 0xf + 0x15] != plVar4) {
          uVar13 = (ulong)uVar20;
          FUN_1008e3970("","LocalDevices",0,"active: m_active=%x active=%x old=%x old2=%x",
                        *(undefined4 *)((long)param_1 + 0x1014),uVar17,param_2,uVar13);
          FUN_1008e3970("","LocalDevices",0,"type=%x cmd=%x old=%x",*puVar6,puVar6[2],*puVar2);
          if (*pcVar3 == '\0') {
            uVar12 = *puVar1;
            uVar20 = *(uint *)(param_1 + uVar10 * 0xf + 0x13);
            uVar9 = (undefined4)param_1[uVar10 * 0xf + 0x14];
            pcVar15 = "NON-NCQ: lba=%llu rw=%d nr=%u";
          }
          else {
            uVar12 = (*(code *)(&PTR_FUN_100bb1850)[bVar7 == 0x60])(puVar6);
            uVar20 = (uint)(puVar6[2] == 'a');
            uVar9 = (*(code *)(&PTR_FUN_100bb1860)[bVar7 == 0x60])(puVar6);
            uVar13 = *puVar1;
            pcVar15 = "NCQ: lba=%llu rw=%d nr=%u was: lba=%llu rw=%d nr=%u";
          }
          FUN_1008e3970("","LocalDevices",0,pcVar15,uVar12,uVar20,uVar9,uVar13);
        }
        if ((long *)*plVar4 != plVar4) {
          FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]",
                        "cd_list_empty(&cmd->list)","../Ahci/sata_hdd.cpp",0x594,
                        "process_multiple_slots");
        }
        *puVar2 = puVar6[2];
        uVar13 = (*(code *)(&PTR_FUN_100bb1850)[bVar7 == 0x60])(puVar6);
        *puVar1 = uVar13;
        uVar9 = (*(code *)(&PTR_FUN_100bb1860)[bVar7 == 0x60])(puVar6);
        *(undefined4 *)(param_1 + uVar10 * 0xf + 0x14) = uVar9;
        uVar20 = uVar17;
        if (*pcVar3 == '\0') break;
        *(uint *)(param_1 + uVar10 * 0xf + 0x13) = (uint)(puVar6[2] == 'a');
        *(uint *)((long)param_1 + 0x1014) = *(uint *)((long)param_1 + 0x1014) | uVar16;
        FUN_100297c30(param_1,puVar1);
        if (uVar17 == 0) goto LAB_1002986a9;
      }
      if (-1 < (int)uVar18) {
        FUN_1008e3970("","LocalDevices",0,"BEWARE, multiple non-ncq cmd 0x%02X",puVar6[2]);
        goto LAB_100298708;
      }
      *(uint *)(param_1 + uVar10 * 0xf + 0x13) = *(uint *)param_1[uVar10 * 0xf + 0x1b] >> 6 & 1;
      uVar18 = uVar14;
    } while (uVar17 != 0);
LAB_1002986a9:
    if (-1 < (int)uVar18) {
LAB_100298708:
      if (((long *)param_1[0x26f0] != param_1 + 0x26f0) ||
         ((long *)param_1[0x26f2] != param_1 + 0x26f2)) {
        FUN_1008e3970("","LocalDevices",0,"BEWARE, non-ncq & ncq");
      }
      *(uint *)(param_1[0x1ff] + 0x20) = *(uint *)(param_1[0x1ff] + 0x20) | 0x80;
      if ((*(byte *)(param_1[(long)(int)uVar18 * 0xf + 0x1b] + 1) & 4) != 0) {
        *(long *)(param_1[0x1fb] + 0xf0) = *(long *)(param_1[0x1fb] + 0xf0) + 1;
      }
      cVar8 = FUN_100291420(param_1,param_1 + (long)(int)uVar18 * 0xf + 0x12);
      if (cVar8 == '\0') {
        FUN_100291510(param_1,param_1 + (long)(int)uVar18 * 0xf + 0x12);
        return;
      }
      return;
    }
  }
  FUN_100297f40(param_1);
  FUN_100402d70(param_1 + 0x26f7);
  (**(code **)(*param_1 + 0xd8))(param_1);
  FUN_100298210(param_1);
  return;
}

