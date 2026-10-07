
long FUN_100717cd0(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar19;
  char *pcVar20;
  undefined8 in_stack_fffffffffffffee8;
  undefined4 uVar21;
  char *pcVar22;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar23;
  char *pcVar24;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 uVar25;
  undefined1 local_78 [64];
  long local_38;
  
  uVar19 = (undefined4)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  uVar21 = (undefined4)((ulong)in_stack_fffffffffffffee8 >> 0x20);
  uVar25 = (undefined4)((ulong)in_stack_ffffffffffffff08 >> 0x20);
  uVar23 = (undefined4)((ulong)in_stack_fffffffffffffef8 >> 0x20);
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  lVar4 = FUN_100725c40(*(undefined8 *)(param_1 + 0x10));
  lVar9 = 0;
  if (lVar4 == 0) goto LAB_100718262;
  lVar5 = FUN_100725c40(*(undefined8 *)(param_1 + 0x18));
  if (lVar5 != 0) {
    lVar6 = FUN_100725c40(*(undefined8 *)(param_1 + 0x20));
    if (lVar6 != 0) {
      iVar3 = FUN_100714a30();
      if (iVar3 - 7U < 2) {
        uVar11 = *(undefined8 *)(param_1 + 8);
        pcVar7 = *(char **)(param_1 + 0x28);
        if (pcVar7 == (char *)0x0) {
          pcVar7 = "";
        }
        pcVar12 = *(char **)(param_1 + 0x48);
        if (pcVar12 == (char *)0x0) {
          pcVar12 = "";
        }
        pcVar14 = *(char **)(param_1 + 0x30);
        if (pcVar14 == (char *)0x0) {
          pcVar14 = "";
        }
        pcVar10 = *(char **)(param_1 + 0x40);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = "";
        }
        uVar1 = *(undefined4 *)(param_1 + 100);
        pcVar13 = (char *)CONCAT44(uVar25,*(undefined4 *)(param_1 + 0x68));
        pcVar24 = "vmsCreated";
        pcVar22 = "vmsActive";
        pcVar20 = "hostKernel";
        pcVar18 = "hostPlatform";
        pcVar17 = "hostOS";
        pcVar16 = "productVersion";
        pcVar15 = "svvvssssii";
LAB_100718128:
        lVar9 = FUN_100725de0(pcVar15,"sipVersion",uVar11,"hwids",lVar4,"ips",lVar5,"macs",lVar6,
                              pcVar16,pcVar7,pcVar17,pcVar12,pcVar18,pcVar14,pcVar20,pcVar10,pcVar22
                              ,CONCAT44(uVar23,uVar1),pcVar24,pcVar13);
        if (lVar9 != 0) goto LAB_100718262;
      }
      else {
        if (iVar3 != 9) {
          uVar11 = *(undefined8 *)(param_1 + 8);
          pcVar12 = *(char **)(param_1 + 0x28);
          if (pcVar12 == (char *)0x0) {
            pcVar12 = "";
          }
          uVar1 = *(undefined4 *)(param_1 + 0x58);
          pcVar7 = *(char **)(param_1 + 0x48);
          pcVar13 = *(char **)(param_1 + 0x40);
          if (iVar3 - 4U < 3) {
            if (pcVar7 == (char *)0x0) {
              pcVar7 = "";
            }
            pcVar24 = "hostOS";
            pcVar17 = "productVersion";
            pcVar15 = "svvvssiiisiissii";
            pcVar13 = pcVar7;
          }
          else {
            if (pcVar13 == (char *)0x0) {
              pcVar13 = "";
            }
            pcVar24 = "os";
            pcVar17 = "vzVersion";
            pcVar15 = "svvvssiiisiiss";
          }
          pcVar22 = "cpuPower";
          pcVar10 = (char *)CONCAT44(uVar21,*(undefined4 *)(param_1 + 0x54));
          pcVar20 = "cpus";
          pcVar14 = (char *)CONCAT44(uVar19,*(undefined4 *)(param_1 + 0x50));
          pcVar18 = "ves";
          pcVar7 = "";
          pcVar16 = "adminEmail";
          goto LAB_100718128;
        }
        if (*(int *)(param_2 + 0x58) == 0) {
          lVar8 = FUN_100725de0("s","extendedSipVersion","0");
        }
        else {
          ___snprintf_chk(local_78,0x40,0,0x40,"%0llu",*(undefined8 *)(param_2 + 0x50));
          lVar8 = FUN_100725de0("s6","extendedSipVersion",local_78,"any",
                                *(undefined4 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x60));
        }
        if (lVar8 != 0) {
          pcVar12 = *(char **)(param_1 + 0x48);
          if (pcVar12 == (char *)0x0) {
            pcVar12 = "";
          }
          pcVar7 = *(char **)(param_1 + 0x40);
          if (pcVar7 == (char *)0x0) {
            pcVar7 = "";
          }
          pcVar13 = *(char **)(param_1 + 0x28);
          if (pcVar13 == (char *)0x0) {
            pcVar13 = "";
          }
          lVar9 = FUN_100725de0("sssvvsiisv","sipVersion",*(undefined8 *)(param_1 + 8),"hostOS",
                                pcVar12,"hostKernel",pcVar7,"ips",lVar5,"macs",lVar6,
                                "productVersion",pcVar13,"usedCapacity",
                                CONCAT44(uVar19,*(undefined4 *)(param_1 + 0x6c)),"usedReplicas",
                                CONCAT44(uVar21,*(undefined4 *)(param_1 + 0x70)),"adminEmail","",
                                "extendedServerInfo",lVar8);
          if (lVar9 != 0) goto LAB_100718262;
          FUN_100724b70(lVar8);
        }
      }
      FUN_100724b70(lVar4);
      lVar4 = lVar6;
    }
    FUN_100724b70(lVar4);
    lVar4 = lVar5;
  }
  FUN_100724b70(lVar4);
  lVar9 = 0;
LAB_100718262:
  if (lVar2 == local_38) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

