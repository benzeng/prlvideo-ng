
void FUN_10047f560(undefined8 param_1)

{
  long *plVar1;
  char *pcVar2;
  int *piVar3;
  undefined *puVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  uid_t uVar8;
  undefined8 *puVar9;
  size_t sVar10;
  QArrayData *pQVar11;
  long lVar12;
  int *piVar13;
  int *piVar14;
  undefined *puVar15;
  long *local_2c0;
  undefined *local_2b8;
  QArrayData *local_2b0;
  undefined *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  QArrayData *local_290;
  QArrayData *local_288;
  QArrayData *local_280;
  QArrayData *local_278;
  int *local_270;
  int *local_268;
  int *local_260;
  undefined4 local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  QArrayData *local_238;
  QArrayData *local_230;
  int *local_228;
  QArrayData *local_220;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QString local_118;
  undefined *local_110;
  QArrayData *local_108;
  undefined *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QTextStream local_e8 [16];
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QFile local_a0 [16];
  int *local_90;
  int *local_88;
  int *local_80;
  undefined4 local_78;
  QArrayData *local_70;
  undefined *local_68;
  int *local_60;
  QArrayData *local_58;
  QString local_50;
  QDir local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar7 = CVmCommonOptions::getOsType();
  if (iVar7 != 9) {
    return;
  }
  uVar8 = _geteuid();
  puVar9 = (undefined8 *)_getpwuid(uVar8);
  local_f0 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (puVar9 != (undefined8 *)0x0) {
    pcVar2 = (char *)*puVar9;
    iVar7 = -1;
    if (pcVar2 != (char *)0x0) {
      sVar10 = _strlen(pcVar2);
      iVar7 = (int)sVar10;
    }
    local_f0 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar7);
  }
  if (*(int *)(local_f0 + 4) == 0) {
    FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Failed to get current username");
    goto LAB_100480f86;
  }
  local_f8 = (QArrayData *)QString::fromAscii_helper("/bin/bash",9);
  puVar15 = PTR_shared_null_100ba2188;
  local_100 = PTR_shared_null_100ba2188;
  pQVar11 = (QArrayData *)QString::fromAscii_helper("-c",2);
  local_108 = pQVar11;
  FUN_10000c490(&local_100,&local_108);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047f673;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047f673:
  local_110 = puVar15;
  QString::fromUtf8_helper((char *)&local_118,0xa37285);
  QString::append(&local_118);
  FUN_10000c490(&local_110,&local_118);
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_31 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047f6f8;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_10047f6f8:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("logdefs=\'/etc/login.defs\'",0x19);
  local_120 = pQVar11;
  FUN_10000c490(&local_110,&local_120);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047f754;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047f754:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("if [ -r \"$logdefs\" ]; then",0x1a);
  local_128 = pQVar11;
  FUN_10000c490(&local_110,&local_128);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047f7b0;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047f7b0:
  pQVar11 = (QArrayData *)
            QString::fromAscii_helper
                      ("  uid_min=`sed -n \'s/^\\s*UID_MIN\\s\\+\\([0-9]\\+\\).*$/\\1/p\' \"$logdefs\" | tail -n1`"
                       ,0x4f);
  local_130 = pQVar11;
  FUN_10000c490(&local_110,&local_130);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047f80c;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047f80c:
  pQVar11 = (QArrayData *)
            QString::fromAscii_helper
                      ("  uid_max=`sed -n \'s/^\\s*UID_MAX\\s\\+\\([0-9]\\+\\).*$/\\1/p\' \"$logdefs\" | tail -n1`"
                       ,0x4f);
  local_138 = pQVar11;
  FUN_10000c490(&local_110,&local_138);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047f868;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047f868:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("fi",2);
  local_140 = pQVar11;
  FUN_10000c490(&local_110,&local_140);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047f8c4;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047f8c4:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("[ -z \"$uid_min\" ] && exit 1",0x1b);
  local_148 = pQVar11;
  FUN_10000c490(&local_110,&local_148);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047f920;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047f920:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("prev_user=",10);
  local_150 = pQVar11;
  FUN_10000c490(&local_110,&local_150);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047f97c;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047f97c:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("user=",5);
  local_158 = pQVar11;
  FUN_10000c490(&local_110,&local_158);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047f9d8;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047f9d8:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("IFS=$\'\\n\'",9);
  local_160 = pQVar11;
  FUN_10000c490(&local_110,&local_160);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047fa34;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047fa34:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("for i in `cat \'/etc/passwd\'`; do",0x20);
  local_168 = pQVar11;
  FUN_10000c490(&local_110,&local_168);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047fa90;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047fa90:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("    uid_i=`echo \"$i\" | cut -d: -f 3`",0x24);
  local_170 = pQVar11;
  FUN_10000c490(&local_110,&local_170);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047faec;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047faec:
  pQVar11 = (QArrayData *)
            QString::fromAscii_helper("    if [ -n \"$uid_i\" -a $uid_i -ge $uid_min ]; then",0x33);
  local_178 = pQVar11;
  FUN_10000c490(&local_110,&local_178);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047fb48;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047fb48:
  pQVar11 = (QArrayData *)
            QString::fromAscii_helper
                      ("        [ -n \"$uid_max\" -a $uid_i -gt $uid_max ] && continue",0x3c);
  local_180 = pQVar11;
  FUN_10000c490(&local_110,&local_180);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047fba4;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047fba4:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("        # found regular user",0x1c);
  local_188 = pQVar11;
  FUN_10000c490(&local_110,&local_188);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047fc00;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047fc00:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("        prev_user=$user",0x17);
  local_190 = pQVar11;
  FUN_10000c490(&local_110,&local_190);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047fc5c;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047fc5c:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("        user=`echo \"$i\" | cut -d: -f1`",0x26)
  ;
  local_198 = pQVar11;
  FUN_10000c490(&local_110,&local_198);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047fcb8;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047fcb8:
  pQVar11 = (QArrayData *)
            QString::fromAscii_helper
                      ("        [ \"$user\" = \"$host_user\" ] && prev_user= && break",0x39);
  local_1a0 = pQVar11;
  FUN_10000c490(&local_110,&local_1a0);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047fd14;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047fd14:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("    fi",6);
  local_1a8 = pQVar11;
  FUN_10000c490(&local_110,&local_1a8);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047fd70;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047fd70:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("done",4);
  local_1b0 = pQVar11;
  FUN_10000c490(&local_110,&local_1b0);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047fdcc;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047fdcc:
  pQVar11 = (QArrayData *)
            QString::fromAscii_helper("save_file=\'/var/lib/parallels-tools/ssh_user\'",0x2d);
  local_1b8 = pQVar11;
  FUN_10000c490(&local_110,&local_1b8);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047fe28;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047fe28:
  pQVar11 = (QArrayData *)
            QString::fromAscii_helper("[ -z \"$user\" ] && rm -f \"$save_file\" && exit 2",0x2e);
  local_1c0 = pQVar11;
  FUN_10000c490(&local_110,&local_1c0);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047fe84;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047fe84:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("if [ -n \"$prev_user\" ]; then",0x1c);
  local_1c8 = pQVar11;
  FUN_10000c490(&local_110,&local_1c8);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047fee0;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047fee0:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("    saved_user=",0xf);
  local_1d0 = pQVar11;
  FUN_10000c490(&local_110,&local_1d0);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047ff3c;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047ff3c:
  pQVar11 = (QArrayData *)
            QString::fromAscii_helper
                      ("    [ -r \"$save_file\" ] && saved_user=`cat \"$save_file\"`",0x38);
  local_1d8 = pQVar11;
  FUN_10000c490(&local_110,&local_1d8);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047ff98;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047ff98:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("    rm -f \"$save_file\"",0x16);
  local_1e0 = pQVar11;
  FUN_10000c490(&local_110,&local_1e0);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10047fff4;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10047fff4:
  pQVar11 = (QArrayData *)
            QString::fromAscii_helper
                      ("    id -u \"$saved_user\" >/dev/null 2>&1 && user=$saved_user || \\",0x40);
  local_1e8 = pQVar11;
  FUN_10000c490(&local_110,&local_1e8);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100480050;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_100480050:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("        exit 2",0xe);
  local_1f0 = pQVar11;
  FUN_10000c490(&local_110,&local_1f0);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004800ac;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_1004800ac:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("fi",2);
  local_1f8 = pQVar11;
  FUN_10000c490(&local_110,&local_1f8);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100480108;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_100480108:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("mkdir -p \"${save_file%/*}\"",0x1a);
  local_200 = pQVar11;
  FUN_10000c490(&local_110,&local_200);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100480164;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_100480164:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("echo \"$user\" | tee \"$save_file\"",0x1f);
  local_208 = pQVar11;
  FUN_10000c490(&local_110,&local_208);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004801c0;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_1004801c0:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("su \"$user\" -c \'",0xf);
  local_210 = pQVar11;
  FUN_10000c490(&local_110,&local_210);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048021c;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_10048021c:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("f=$HOME/.ssh/authorized_keys",0x1c);
  local_218 = pQVar11;
  FUN_10000c490(&local_110,&local_218);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100480278;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_100480278:
  pQVar11 = (QArrayData *)
            QString::fromAscii_helper
                      ("[ -r \"$f\" ] && sed -i \"/ prltoolsd-tag\\$/d\" \"$f\"",0x30);
  local_220 = pQVar11;
  FUN_10000c490(&local_110,&local_220);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004802df;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_1004802df:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  cVar6 = CVmTools::isSyncSshIds();
  if (cVar6 != '\0') {
    local_228 = (int *)puVar15;
    QDir::homePath();
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0xa379ca);
    QString::append(&local_50);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10048037a;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10048037a:
    QDir::QDir(local_48,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004803b7;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1004803b7:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004803e7;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1004803e7:
    pQVar11 = (QArrayData *)QString::fromAscii_helper("id_*.pub",8);
    local_68 = puVar15;
    local_70 = pQVar11;
    FUN_10000c490(&local_68,&local_70);
    QDir::entryList(&local_60,local_48,&local_68,0xffffffff,0xffffffff);
    FUN_100013180(&local_68);
    if (*(int *)pQVar11 != -1) {
      if (*(int *)pQVar11 != 0) {
        LOCK();
        *(int *)pQVar11 = *(int *)pQVar11 + -1;
        local_31 = *(int *)pQVar11 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100480460;
      }
      QArrayData::deallocate(pQVar11,2,8);
    }
LAB_100480460:
    local_90 = local_60;
    if (*local_60 != -1) {
      if (*local_60 == 0) {
        QListData::detach((int)&local_90);
        iVar7 = local_90[2];
        if (iVar7 != local_90[3]) {
          local_60 = local_60 + (long)local_60[2] * 2 + 4;
          piVar13 = local_90 + (long)iVar7 * 2 + 4;
          lVar12 = (long)local_90[3] * 8 + (long)iVar7 * -8;
          do {
            piVar14 = *(int **)local_60;
            *(int **)piVar13 = piVar14;
            if (1 < *piVar14 + 1U) {
              LOCK();
              *piVar14 = *piVar14 + 1;
              local_31 = *piVar14 != 0;
              UNLOCK();
            }
            piVar13 = piVar13 + 2;
            local_60 = local_60 + 2;
            lVar12 = lVar12 + -8;
          } while (lVar12 != 0);
        }
      }
      else {
        LOCK();
        *local_60 = *local_60 + 1;
        local_31 = *local_60 != 0;
        UNLOCK();
      }
    }
    local_88 = local_90 + (long)local_90[2] * 2 + 4;
    local_80 = local_90 + (long)local_90[3] * 2 + 4;
    if (local_90[2] != local_90[3]) {
      do {
        local_78 = 1;
        QDir::absoluteFilePath(&local_a8);
        QFile::QFile(local_a0,&local_a8);
        if (*(int *)local_a8.field0_0x0 != -1) {
          if (*(int *)local_a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
            local_31 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004805bd;
          }
          QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
        }
LAB_1004805bd:
        if (1 < DAT_1011b55f8) {
          QFile::fileName();
          QString::toUtf8();
          FUN_1008e3970("TCHOST","ToolsCenterHost",2,"Reading public key from file \'%s\'",
                        local_b0 + *(long *)(local_b0 + 0x10));
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100480644;
            }
            QArrayData::deallocate(local_b0,1,8);
          }
LAB_100480644:
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100480680;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
        }
LAB_100480680:
        cVar6 = QFile::open(local_a0,1);
        if (cVar6 == '\0') {
          QFile::fileName();
          QString::toUtf8();
          FUN_1008e3970("TCHOST","ToolsCenterHost",0,"Failed to read from file \'%s\'",
                        local_c0 + *(long *)(local_c0 + 0x10));
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004807d1;
            }
            QArrayData::deallocate(local_c0,1,8);
          }
LAB_1004807d1:
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100480810;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
        }
        else {
          QTextStream::QTextStream(local_e8,(QIODevice *)local_a0);
          QTextStream::readAll();
          QString::trimmed();
          FUN_10000c490(&local_228,&local_d0);
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10048070b;
            }
            QArrayData::deallocate(local_d0,2,8);
          }
LAB_10048070b:
          if (*(int *)local_d8 != -1) {
            if (*(int *)local_d8 != 0) {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + -1;
              local_31 = *(int *)local_d8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100480741;
            }
            QArrayData::deallocate(local_d8,2,8);
          }
LAB_100480741:
          QTextStream::~QTextStream(local_e8);
        }
LAB_100480810:
        QFile::~QFile(local_a0);
        local_88 = local_88 + 2;
      } while (local_88 != local_80);
    }
    local_78 = 1;
    FUN_100013180(&local_90);
    FUN_100013180(&local_60);
    QDir::~QDir(local_48);
    if (local_228[3] != local_228[2]) {
      pQVar11 = (QArrayData *)QString::fromAscii_helper("if [ ! -f \"$f\" ]; then",0x16);
      local_230 = pQVar11;
      FUN_10000c490(&local_110,&local_230);
      if (*(int *)pQVar11 != -1) {
        if (*(int *)pQVar11 != 0) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004808bf;
        }
        QArrayData::deallocate(pQVar11,2,8);
      }
LAB_1004808bf:
      pQVar11 = (QArrayData *)QString::fromAscii_helper("    mkdir -p \"$HOME/.ssh\"",0x19);
      local_238 = pQVar11;
      FUN_10000c490(&local_110,&local_238);
      if (*(int *)pQVar11 != -1) {
        if (*(int *)pQVar11 != 0) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100480918;
        }
        QArrayData::deallocate(pQVar11,2,8);
      }
LAB_100480918:
      pQVar11 = (QArrayData *)QString::fromAscii_helper("    touch \"$f\"",0xe);
      local_240 = pQVar11;
      FUN_10000c490(&local_110,&local_240);
      if (*(int *)pQVar11 != -1) {
        if (*(int *)pQVar11 != 0) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100480971;
        }
        QArrayData::deallocate(pQVar11,2,8);
      }
LAB_100480971:
      pQVar11 = (QArrayData *)QString::fromAscii_helper("    chmod 0600 \"$f\"",0x13);
      local_248 = pQVar11;
      FUN_10000c490(&local_110,&local_248);
      if (*(int *)pQVar11 != -1) {
        if (*(int *)pQVar11 != 0) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004809ca;
        }
        QArrayData::deallocate(pQVar11,2,8);
      }
LAB_1004809ca:
      pQVar11 = (QArrayData *)QString::fromAscii_helper("fi",2);
      local_250 = pQVar11;
      FUN_10000c490(&local_110,&local_250);
      if (*(int *)pQVar11 != -1) {
        if (*(int *)pQVar11 != 0) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100480a23;
        }
        QArrayData::deallocate(pQVar11,2,8);
      }
    }
LAB_100480a23:
    local_270 = local_228;
    if (*local_228 != -1) {
      if (*local_228 == 0) {
        QListData::detach((int)&local_270);
        iVar7 = local_270[2];
        if (iVar7 != local_270[3]) {
          piVar13 = local_228 + (long)local_228[2] * 2 + 4;
          piVar14 = local_270 + (long)iVar7 * 2 + 4;
          lVar12 = (long)local_270[3] * 8 + (long)iVar7 * -8;
          do {
            piVar3 = *(int **)piVar13;
            *(int **)piVar14 = piVar3;
            if (1 < *piVar3 + 1U) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              local_31 = *piVar3 != 0;
              UNLOCK();
            }
            piVar14 = piVar14 + 2;
            piVar13 = piVar13 + 2;
            lVar12 = lVar12 + -8;
          } while (lVar12 != 0);
        }
      }
      else {
        LOCK();
        *local_228 = *local_228 + 1;
        local_31 = *local_228 != 0;
        UNLOCK();
      }
    }
    piVar13 = local_270 + (long)local_270[2] * 2 + 4;
    local_260 = local_270 + (long)local_270[3] * 2 + 4;
    local_268 = piVar13;
    if (local_270[2] != local_270[3]) {
      do {
        local_258 = 1;
        local_268 = piVar13;
        local_280 = (QArrayData *)
                    QString::fromAscii_helper("echo \"%1 prltoolsd-tag\" >>\"$f\"",0x1e);
        QString::arg(&local_278,&local_280,piVar13,0,0x20);
        FUN_10000c490(&local_110,&local_278);
        if (*(int *)local_278 != -1) {
          if (*(int *)local_278 != 0) {
            LOCK();
            *(int *)local_278 = *(int *)local_278 + -1;
            local_31 = *(int *)local_278 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100480b7b;
          }
          QArrayData::deallocate(local_278,2,8);
        }
LAB_100480b7b:
        if (*(int *)local_280 != -1) {
          if (*(int *)local_280 != 0) {
            LOCK();
            *(int *)local_280 = *(int *)local_280 + -1;
            local_31 = *(int *)local_280 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100480bb1;
          }
          QArrayData::deallocate(local_280,2,8);
        }
LAB_100480bb1:
        piVar13 = local_268 + 2;
        local_268 = piVar13;
      } while (piVar13 != local_260);
    }
    local_258 = 1;
    FUN_100013180(&local_270);
    puVar15 = PTR_shared_null_100ba2188;
    FUN_100013180(&local_228);
  }
  pQVar11 = (QArrayData *)QString::fromAscii_helper("exit 0",6);
  local_288 = pQVar11;
  FUN_10000c490(&local_110,&local_288);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100480c55;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_100480c55:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("\'",1);
  local_290 = pQVar11;
  FUN_10000c490(&local_110,&local_290);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100480cb1;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_100480cb1:
  pQVar11 = (QArrayData *)QString::fromAscii_helper("\n",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_298,(QChar *)&local_110,
             (int)*(undefined8 *)(pQVar11 + 0x10) + (int)pQVar11);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100480d17;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_100480d17:
  FUN_10000c490(&local_100,&local_298);
  if (2 < DAT_1011b55f8) {
    QString::toUtf8();
    FUN_1008e3970("TCHOST","ToolsCenterHost",3,"SyncSSHIds guest script:\n<\n%s\n>",
                  local_2a0 + *(long *)(local_2a0 + 0x10));
    if (*(int *)local_2a0 != -1) {
      if (*(int *)local_2a0 != 0) {
        LOCK();
        *(int *)local_2a0 = *(int *)local_2a0 + -1;
        local_31 = *(int *)local_2a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100480dab;
      }
      QArrayData::deallocate(local_2a0,1,8);
    }
  }
LAB_100480dab:
  puVar4 = PTR_shared_null_100ba20d0;
  local_2a8 = PTR_shared_null_100ba20d0;
  pQVar11 = (QArrayData *)QString::fromAscii_helper("FAKE_SESSION_UUID",0x11);
  plVar5 = DAT_1011ccb98;
  local_2c0 = DAT_1011ccb98;
  if (DAT_1011ccb98 != (long *)0x0) {
    LOCK();
    *(int *)(DAT_1011ccb98 + 1) = (int)DAT_1011ccb98[1] + 1;
    UNLOCK();
  }
  local_2b8 = puVar15;
  local_2b0 = pQVar11;
  iVar7 = FUN_100486cb0(param_1,&local_2b0,&local_f8,&local_100,&local_2b8,0x800,&local_2c0,
                        &local_2a8,FUN_10048acd0,2);
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  FUN_100013180(&local_2b8);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100480eb0;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_100480eb0:
  if (iVar7 != 0) {
    FUN_1008e3970("TCHOST","ToolsCenterHost",0,"SyncSshIds command submit failed, rc=%x",iVar7);
  }
  if (*(int *)puVar4 != -1) {
    if (*(int *)puVar4 != 0) {
      LOCK();
      *(int *)puVar4 = *(int *)puVar4 + -1;
      local_31 = *(int *)puVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100480f09;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
  }
LAB_100480f09:
  if (*(int *)local_298 != -1) {
    if (*(int *)local_298 != 0) {
      LOCK();
      *(int *)local_298 = *(int *)local_298 + -1;
      local_31 = *(int *)local_298 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100480f3f;
    }
    QArrayData::deallocate(local_298,2,8);
  }
LAB_100480f3f:
  FUN_100013180(&local_110);
  FUN_100013180(&local_100);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100480f86;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100480f86:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      UNLOCK();
      if (*(int *)local_f0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
  return;
}

