
undefined8 * FUN_100b26ba0(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  undefined *puVar5;
  char cVar6;
  void *pvVar7;
  long *plVar8;
  void *pvVar9;
  undefined8 in_stack_fffffffffffffcd8;
  undefined4 uVar12;
  undefined8 uVar10;
  _func_void_Node_ptr **pp_Var11;
  undefined *local_310;
  QArrayData *local_308;
  QArrayData *local_300;
  undefined1 local_2f8 [64];
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QRegExp local_2a8 [8];
  QArrayData *local_2a0;
  undefined *local_298;
  undefined4 local_28c;
  _func_void_Node_ptr *local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  _func_void_Node_ptr *local_270;
  QArrayData *local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  _func_void_Node_ptr *local_250;
  QArrayData *local_248;
  undefined1 local_240 [64];
  QArrayData *local_200;
  QArrayData *local_1f8;
  QRegExp local_1f0 [8];
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  undefined1 local_1d0 [64];
  QArrayData *local_190;
  QArrayData *local_188;
  undefined1 local_180 [64];
  QArrayData *local_140;
  QArrayData *local_138;
  undefined1 local_130 [64];
  undefined *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  undefined1 local_d8 [64];
  QArrayData *local_98;
  QArrayData *local_90;
  QRegExp local_88 [8];
  QArrayData *local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [7];
  undefined1 local_31;
  
  uVar12 = (undefined4)((ulong)in_stack_fffffffffffffcd8 >> 0x20);
  pvVar7 = operator_new(0x80,(nothrow_t *)PTR_nothrow_1021e1620);
  pvVar9 = (void *)0x0;
  if (pvVar7 != (void *)0x0) {
    FUN_100b36490(pvVar7);
    pvVar9 = pvVar7;
  }
  plVar8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar8 == (long *)0x0) {
    bVar4 = true;
    plVar8 = (long *)0x0;
    if (pvVar9 != (void *)0x0) {
      FUN_100b367a0(pvVar9);
      operator_delete(pvVar9);
      plVar8 = (long *)0x0;
    }
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    plVar8[2] = (long)pvVar9;
    *plVar8 = (long)&PTR_FUN_1022cf2e8;
    if (pvVar9 != (void *)0x0) {
      local_80 = (QArrayData *)QString::fromAscii_helper("HEADER",6);
      local_90 = (QArrayData *)QString::fromAscii_helper("^# Disk Descriptor\\s?File\\n",0x1b);
      QRegExp::QRegExp(local_88,&local_90,1,0);
      local_98 = (QArrayData *)QString::fromAscii_helper("# Disk DescriptorFile\n",0x16);
      local_e0 = (QArrayData *)QString::fromAscii_helper("^([^=\\s]+)=\"?([^\"]+)\"?\\n",0x18);
      local_e8 = (QArrayData *)QString::fromAscii_helper("%1=\"%2\"\n",8);
      uVar10 = CONCAT44(uVar12,2);
      FUN_100b35c40(local_d8,&local_e0,1,2,&local_e8,1,uVar10);
      uVar12 = (undefined4)((ulong)uVar10 >> 0x20);
      local_f0 = PTR_shared_null_1021e15e8;
      local_138 = (QArrayData *)QString::fromAscii_helper("^(version)=(1)\\n",0x10);
      local_140 = (QArrayData *)QString::fromAscii_helper("%1=%2\n",6);
      uVar10 = CONCAT44(uVar12,2);
      FUN_100b35c40(local_130,&local_138,1,2,&local_140,1,uVar10);
      uVar12 = (undefined4)((ulong)uVar10 >> 0x20);
      FUN_100b2e9e0(&local_f0,local_130);
      local_188 = (QArrayData *)QString::fromAscii_helper("^(CID)=([a-f0-9]{8})\\n",0x16);
      local_190 = (QArrayData *)QString::fromAscii_helper("%1=%2\n",6);
      uVar10 = CONCAT44(uVar12,2);
      FUN_100b35c40(local_180,&local_188,1,2,&local_190,1,uVar10);
      uVar12 = (undefined4)((ulong)uVar10 >> 0x20);
      FUN_100b2e9e0(&local_f0,local_180);
      local_1d8 = (QArrayData *)QString::fromAscii_helper("^(parentCID)=([a-f0-9]{8})\\n",0x1c);
      local_1e0 = (QArrayData *)QString::fromAscii_helper("%1=%2\n",6);
      uVar10 = CONCAT44(uVar12,2);
      FUN_100b35c40(local_1d0,&local_1d8,1,2,&local_1e0,1,uVar10);
      uVar12 = (undefined4)((ulong)uVar10 >> 0x20);
      FUN_100b2e9e0(&local_f0,local_1d0);
      cVar6 = FUN_100b367b0(pvVar9,&local_80,local_88,&local_98,local_d8,&local_f0);
      FUN_100b2e760(local_1d0);
      if (*(int *)local_1e0 != -1) {
        if (*(int *)local_1e0 != 0) {
          LOCK();
          *(int *)local_1e0 = *(int *)local_1e0 + -1;
          local_31 = *(int *)local_1e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b26eae;
        }
        QArrayData::deallocate(local_1e0,2,8);
      }
LAB_100b26eae:
      if (*(int *)local_1d8 != -1) {
        if (*(int *)local_1d8 != 0) {
          LOCK();
          *(int *)local_1d8 = *(int *)local_1d8 + -1;
          local_31 = *(int *)local_1d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b26ee4;
        }
        QArrayData::deallocate(local_1d8,2,8);
      }
LAB_100b26ee4:
      FUN_100b2e760(local_180);
      if (*(int *)local_190 != -1) {
        if (*(int *)local_190 != 0) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + -1;
          local_31 = *(int *)local_190 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b26f26;
        }
        QArrayData::deallocate(local_190,2,8);
      }
LAB_100b26f26:
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_31 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b26f5c;
        }
        QArrayData::deallocate(local_188,2,8);
      }
LAB_100b26f5c:
      FUN_100b2e760(local_130);
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_31 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b26f9e;
        }
        QArrayData::deallocate(local_140,2,8);
      }
LAB_100b26f9e:
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b26fd4;
        }
        QArrayData::deallocate(local_138,2,8);
      }
LAB_100b26fd4:
      FUN_100b2e680(&local_f0);
      FUN_100b2e760(local_d8);
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b27022;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_100b27022:
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b27058;
        }
        QArrayData::deallocate(local_e0,2,8);
      }
LAB_100b27058:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b2708e;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100b2708e:
      QRegExp::~QRegExp(local_88);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b270cd;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100b270cd:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b270fd;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_100b270fd:
      if (cVar6 == '\0') {
        FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","res","VMDKSparseImage.cpp",
                      CONCAT44(uVar12,0x41),"InitVMDKParser");
      }
      lVar3 = plVar8[2];
      local_1e8 = (QArrayData *)QString::fromAscii_helper("EXTENTS",7);
      local_1f8 = (QArrayData *)QString::fromAscii_helper("^# Extent description\\n",0x17);
      QRegExp::QRegExp(local_1f0,&local_1f8,1,0);
      local_200 = (QArrayData *)QString::fromAscii_helper("\n# Extent description\n",0x16);
      local_248 = (QArrayData *)
                  QString::fromAscii_helper
                            ("^(RW|RDONLY|NOACCESS)\\s(\\d+)\\s(SPARSE|FLAT)\\s\"([^\"]+)\"(\\s(\\d+)?)?\\n"
                             ,0x43);
      puVar5 = PTR_shared_null_1021e15d0;
      local_250 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
      local_254 = 1;
      FUN_100131ed0(&local_250,&local_254,local_78);
      local_258 = 2;
      FUN_100131ed0(&local_250,&local_258,local_70);
      local_25c = 3;
      FUN_100131ed0(&local_250,&local_25c,local_68);
      local_260 = 6;
      FUN_100131ed0(&local_250,&local_260,local_60);
      local_268 = (QArrayData *)QString::fromAscii_helper("%1 %2 %3 \"%4\" %5\n",0x11);
      local_270 = (_func_void_Node_ptr *)puVar5;
      local_274 = 1;
      FUN_100131ed0(&local_270,&local_274,local_58);
      local_278 = 2;
      FUN_100131ed0(&local_270,&local_278,local_50);
      local_27c = 3;
      FUN_100131ed0(&local_270,&local_27c,local_48);
      local_280 = 5;
      pp_Var11 = &local_270;
      FUN_100131ed0(pp_Var11,&local_280,local_40);
      local_288 = (_func_void_Node_ptr *)puVar5;
      local_28c = 5;
      FUN_100131ed0(&local_288,&local_28c,local_38);
      FUN_100b361b0(local_240,&local_248,4,&local_250,&local_268,4,pp_Var11,&local_288);
      uVar12 = (undefined4)((ulong)pp_Var11 >> 0x20);
      local_298 = PTR_shared_null_1021e15e8;
      cVar6 = FUN_100b367b0(lVar3,&local_1e8,local_1f0,&local_200,local_240,&local_298);
      FUN_100b2e680(&local_298);
      FUN_100b2e760(local_240);
      if (*(int *)(local_288 + 0x10) != -1) {
        if (*(int *)(local_288 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_288 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b273e3;
        }
        QHashData::free_helper(local_288);
      }
LAB_100b273e3:
      if (*(int *)(local_270 + 0x10) != -1) {
        if (*(int *)(local_270 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_270 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b27418;
        }
        QHashData::free_helper(local_270);
      }
LAB_100b27418:
      if (*(int *)local_268 != -1) {
        if (*(int *)local_268 != 0) {
          LOCK();
          *(int *)local_268 = *(int *)local_268 + -1;
          local_31 = *(int *)local_268 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b2744e;
        }
        QArrayData::deallocate(local_268,2,8);
      }
LAB_100b2744e:
      if (*(int *)(local_250 + 0x10) != -1) {
        if (*(int *)(local_250 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_250 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b27483;
        }
        QHashData::free_helper(local_250);
      }
LAB_100b27483:
      if (*(int *)local_248 != -1) {
        if (*(int *)local_248 != 0) {
          LOCK();
          *(int *)local_248 = *(int *)local_248 + -1;
          local_31 = *(int *)local_248 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b274b9;
        }
        QArrayData::deallocate(local_248,2,8);
      }
LAB_100b274b9:
      if (*(int *)local_200 != -1) {
        if (*(int *)local_200 != 0) {
          LOCK();
          *(int *)local_200 = *(int *)local_200 + -1;
          local_31 = *(int *)local_200 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b274ef;
        }
        QArrayData::deallocate(local_200,2,8);
      }
LAB_100b274ef:
      QRegExp::~QRegExp(local_1f0);
      if (*(int *)local_1f8 != -1) {
        if (*(int *)local_1f8 != 0) {
          LOCK();
          *(int *)local_1f8 = *(int *)local_1f8 + -1;
          local_31 = *(int *)local_1f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b27531;
        }
        QArrayData::deallocate(local_1f8,2,8);
      }
LAB_100b27531:
      if (*(int *)local_1e8 != -1) {
        if (*(int *)local_1e8 != 0) {
          LOCK();
          *(int *)local_1e8 = *(int *)local_1e8 + -1;
          local_31 = *(int *)local_1e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b27567;
        }
        QArrayData::deallocate(local_1e8,2,8);
      }
LAB_100b27567:
      if (cVar6 == '\0') {
        uVar10 = CONCAT44(uVar12,0x51);
        FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","res","VMDKSparseImage.cpp",
                      uVar10,"InitVMDKParser");
        uVar12 = (undefined4)((ulong)uVar10 >> 0x20);
      }
      lVar3 = plVar8[2];
      local_2a0 = (QArrayData *)QString::fromAscii_helper("DDB",3);
      local_2b0 = (QArrayData *)
                  QString::fromAscii_helper("^# The Disk Data Base\\s?\\n#DDB\\n",0x20);
      QRegExp::QRegExp(local_2a8,&local_2b0,1,0);
      local_2b8 = (QArrayData *)QString::fromAscii_helper("\n# The Disk Data Base \n#DDB\n\n",0x1d);
      local_300 = (QArrayData *)
                  QString::fromAscii_helper("^(ddb\\.[^\\s]+)\\s=\\s\"([^\"]*)\"\\n",0x1e);
      local_308 = (QArrayData *)QString::fromAscii_helper("%1 = \"%2\"\n",10);
      uVar10 = CONCAT44(uVar12,2);
      FUN_100b35c40(local_2f8,&local_300,1,2,&local_308,1,uVar10);
      uVar12 = (undefined4)((ulong)uVar10 >> 0x20);
      local_310 = PTR_shared_null_1021e15e8;
      cVar6 = FUN_100b367b0(lVar3,&local_2a0,local_2a8,&local_2b8,local_2f8,&local_310);
      FUN_100b2e680(&local_310);
      FUN_100b2e760(local_2f8);
      if (*(int *)local_308 != -1) {
        if (*(int *)local_308 != 0) {
          LOCK();
          *(int *)local_308 = *(int *)local_308 + -1;
          local_31 = *(int *)local_308 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b276fe;
        }
        QArrayData::deallocate(local_308,2,8);
      }
LAB_100b276fe:
      if (*(int *)local_300 != -1) {
        if (*(int *)local_300 != 0) {
          LOCK();
          *(int *)local_300 = *(int *)local_300 + -1;
          local_31 = *(int *)local_300 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b27734;
        }
        QArrayData::deallocate(local_300,2,8);
      }
LAB_100b27734:
      if (*(int *)local_2b8 != -1) {
        if (*(int *)local_2b8 != 0) {
          LOCK();
          *(int *)local_2b8 = *(int *)local_2b8 + -1;
          local_31 = *(int *)local_2b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b2776a;
        }
        QArrayData::deallocate(local_2b8,2,8);
      }
LAB_100b2776a:
      QRegExp::~QRegExp(local_2a8);
      if (*(int *)local_2b0 != -1) {
        if (*(int *)local_2b0 != 0) {
          LOCK();
          *(int *)local_2b0 = *(int *)local_2b0 + -1;
          local_31 = *(int *)local_2b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b277ac;
        }
        QArrayData::deallocate(local_2b0,2,8);
      }
LAB_100b277ac:
      if (*(int *)local_2a0 != -1) {
        if (*(int *)local_2a0 != 0) {
          LOCK();
          *(int *)local_2a0 = *(int *)local_2a0 + -1;
          local_31 = *(int *)local_2a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b277e2;
        }
        QArrayData::deallocate(local_2a0,2,8);
      }
LAB_100b277e2:
      if (cVar6 == '\0') {
        FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","res","VMDKSparseImage.cpp",
                      CONCAT44(uVar12,0x5b),"InitVMDKParser");
      }
      *param_1 = plVar8;
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      goto LAB_100b27883;
    }
    bVar4 = false;
  }
  FUN_100df99c0("","dimg",0,"Error: memory problems!");
  *param_1 = 0;
  if (bVar4) {
    return param_1;
  }
LAB_100b27883:
  LOCK();
  plVar2 = plVar8 + 1;
  lVar3 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar3 == 1) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}

