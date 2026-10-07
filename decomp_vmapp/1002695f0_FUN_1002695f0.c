
void FUN_1002695f0(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  QArrayData *local_e8;
  char local_da;
  char local_d9 [145];
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar3 = FUN_100264550(param_1 + 0x10,param_1 + 0x118,2,0,0xa00,0);
  if (lVar3 == 0) {
    pcVar4 = "[CParallelPDF] can\'t create spool file";
  }
  else {
    iVar2 = FUN_10026ad40(param_2,lVar3,param_1 + 0x120,param_1 + 0x124,local_d9,&local_da);
    if (iVar2 == 0) {
      QString::toUtf8();
      FUN_1008e3970("","LocalDevices",0,"[CParallelPDF] Failed to pull data to file %s",
                    local_e8 + *(long *)(local_e8 + 0x10));
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          UNLOCK();
          local_48 = CONCAT71(local_48._1_7_,*(int *)local_e8 != 0);
          if (*(int *)local_e8 != 0) goto LAB_1002696a9;
        }
        QArrayData::deallocate(local_e8,1,8);
      }
      goto LAB_1002696a9;
    }
    if (local_d9[0] == '\0') {
      if (local_da == '\0') {
        pcVar4 = "[CParallelPDF] Skip incomplete (no EOF) printing job";
      }
      else {
        local_d9[0x81] = '\0';
        local_d9[0x82] = '\0';
        local_d9[0x83] = '\0';
        local_d9[0x84] = '\0';
        local_d9[0x85] = '\0';
        local_d9[0x86] = '\0';
        local_d9[0x87] = '\0';
        local_d9[0x88] = '\0';
        local_d9[0x89] = '\0';
        local_d9[0x8a] = '\0';
        local_d9[0x8b] = '\0';
        local_d9[0x8c] = '\0';
        local_d9[0x8d] = '\0';
        local_d9[0x8e] = '\0';
        local_d9[0x8f] = '\0';
        local_d9[0x90] = '\0';
        local_d9[0x71] = '\0';
        local_d9[0x72] = '\0';
        local_d9[0x73] = '\0';
        local_d9[0x74] = '\0';
        local_d9[0x75] = '\0';
        local_d9[0x76] = '\0';
        local_d9[0x77] = '\0';
        local_d9[0x78] = '\0';
        local_d9[0x79] = '\0';
        local_d9[0x7a] = '\0';
        local_d9[0x7b] = '\0';
        local_d9[0x7c] = '\0';
        local_d9[0x7d] = '\0';
        local_d9[0x7e] = '\0';
        local_d9[0x7f] = '\0';
        local_d9[0x80] = '\0';
        local_d9[0x61] = '\0';
        local_d9[0x62] = '\0';
        local_d9[99] = '\0';
        local_d9[100] = '\0';
        local_d9[0x65] = '\0';
        local_d9[0x66] = '\0';
        local_d9[0x67] = '\0';
        local_d9[0x68] = '\0';
        local_d9[0x69] = '\0';
        local_d9[0x6a] = '\0';
        local_d9[0x6b] = '\0';
        local_d9[0x6c] = '\0';
        local_d9[0x6d] = '\0';
        local_d9[0x6e] = '\0';
        local_d9[0x6f] = '\0';
        local_d9[0x70] = '\0';
        local_d9[0x51] = '\0';
        local_d9[0x52] = '\0';
        local_d9[0x53] = '\0';
        local_d9[0x54] = '\0';
        local_d9[0x55] = '\0';
        local_d9[0x56] = '\0';
        local_d9[0x57] = '\0';
        local_d9[0x58] = '\0';
        local_d9[0x59] = '\0';
        local_d9[0x5a] = '\0';
        local_d9[0x5b] = '\0';
        local_d9[0x5c] = '\0';
        local_d9[0x5d] = '\0';
        local_d9[0x5e] = '\0';
        local_d9[0x5f] = '\0';
        local_d9[0x60] = '\0';
        local_d9[0x41] = '\0';
        local_d9[0x42] = '\0';
        local_d9[0x43] = '\0';
        local_d9[0x44] = '\0';
        local_d9[0x45] = '\0';
        local_d9[0x46] = '\0';
        local_d9[0x47] = '\0';
        local_d9[0x48] = '\0';
        local_d9[0x49] = '\0';
        local_d9[0x4a] = '\0';
        local_d9[0x4b] = '\0';
        local_d9[0x4c] = '\0';
        local_d9[0x4d] = '\0';
        local_d9[0x4e] = '\0';
        local_d9[0x4f] = '\0';
        local_d9[0x50] = '\0';
        local_d9[0x31] = '\0';
        local_d9[0x32] = '\0';
        local_d9[0x33] = '\0';
        local_d9[0x34] = '\0';
        local_d9[0x35] = '\0';
        local_d9[0x36] = '\0';
        local_d9[0x37] = '\0';
        local_d9[0x38] = '\0';
        local_d9[0x39] = '\0';
        local_d9[0x3a] = '\0';
        local_d9[0x3b] = '\0';
        local_d9[0x3c] = '\0';
        local_d9[0x3d] = '\0';
        local_d9[0x3e] = '\0';
        local_d9[0x3f] = '\0';
        local_d9[0x40] = '\0';
        local_d9[0x21] = '\0';
        local_d9[0x22] = '\0';
        local_d9[0x23] = '\0';
        local_d9[0x24] = '\0';
        local_d9[0x25] = '\0';
        local_d9[0x26] = '\0';
        local_d9[0x27] = '\0';
        local_d9[0x28] = '\0';
        local_d9[0x29] = '\0';
        local_d9[0x2a] = '\0';
        local_d9[0x2b] = '\0';
        local_d9[0x2c] = '\0';
        local_d9[0x2d] = '\0';
        local_d9[0x2e] = '\0';
        local_d9[0x2f] = '\0';
        local_d9[0x30] = '\0';
        local_d9[0x11] = '\0';
        local_d9[0x12] = '\0';
        local_d9[0x13] = '\0';
        local_d9[0x14] = '\0';
        local_d9[0x15] = '\0';
        local_d9[0x16] = '\0';
        local_d9[0x17] = '\0';
        local_d9[0x18] = '\0';
        local_d9[0x19] = '\0';
        local_d9[0x1a] = '\0';
        local_d9[0x1b] = '\0';
        local_d9[0x1c] = '\0';
        local_d9[0x1d] = '\0';
        local_d9[0x1e] = '\0';
        local_d9[0x1f] = '\0';
        local_d9[0x20] = '\0';
        local_d9[1] = '\0';
        local_d9[2] = '\0';
        local_d9[3] = '\0';
        local_d9[4] = '\0';
        local_d9[5] = '\0';
        local_d9[6] = '\0';
        local_d9[7] = '\0';
        local_d9[8] = '\0';
        local_d9[9] = '\0';
        local_d9[10] = '\0';
        local_d9[0xb] = '\0';
        local_d9[0xc] = '\0';
        local_d9[0xd] = '\0';
        local_d9[0xe] = '\0';
        local_d9[0xf] = '\0';
        local_d9[0x10] = '\0';
        local_48 = 0;
        uStack_40 = 0;
        cVar1 = QMetaObject::invokeMethod(param_1,"ConvertToPDF",2,0,0);
        if (cVar1 != '\0') goto LAB_1002696a9;
        pcVar4 = "[CParallelPDF] Failed to invoke method ConvertToPDF";
      }
    }
    else {
      pcVar4 = "[CParallelPDF] Skip PS Query printing job";
    }
  }
  FUN_1008e3970("","LocalDevices",0,pcVar4);
LAB_1002696a9:
  FUN_100264750(param_1 + 0x10,lVar3);
  return;
}

