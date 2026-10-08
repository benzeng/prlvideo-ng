
void FUN_100329bd0(long param_1,long *param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  QArrayData *pQVar3;
  int iVar4;
  _func_void_Node_ptr_void_ptr *p_Var5;
  _func_void_Node_ptr_void_ptr *p_Var6;
  undefined8 uVar7;
  undefined8 uVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 in_stack_fffffffffffffdb8;
  undefined4 uVar13;
  QArrayData *local_220;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  QArrayData *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  QArrayData *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  int local_144;
  QArrayData *local_140;
  QArrayData *local_138;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined4 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined4 *local_98;
  undefined8 *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  char *local_78;
  undefined4 *local_70;
  char *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined4 *local_40;
  undefined1 local_31;
  
  uVar13 = (undefined4)((ulong)in_stack_fffffffffffffdb8 >> 0x20);
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    FUN_100df99c0("","prl_client_app",0,
                  "Failed to process SDK event, VM desktop object does not exist!");
    return;
  }
  FUN_1003193e0(&local_138);
  if ((DAT_102312240 == '\0') && (iVar4 = ___cxa_guard_acquire(&DAT_102312240), iVar4 != 0)) {
    DAT_102312238 = (_func_void_Node_ptr_void_ptr *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_10032b920,&DAT_102312238,0x100000000);
    ___cxa_guard_release(&DAT_102312240);
  }
  if (*(int *)(DAT_102312238 + 0x14) == 0) {
    local_10c = 0x18967;
    FUN_10032ba80(&DAT_102312238,&local_10c,local_108);
    local_110 = 0x18966;
    FUN_10032ba80(&DAT_102312238,&local_110,local_100);
    local_114 = 0x18982;
    FUN_10032ba80(&DAT_102312238,&local_114,local_f8);
    local_118 = 0x1895f;
    FUN_10032ba80(&DAT_102312238,&local_118,local_f0);
    local_11c = 0x18978;
    FUN_10032ba80(&DAT_102312238,&local_11c,local_e8);
    local_120 = 0x18974;
    FUN_10032ba80(&DAT_102312238,&local_120,local_e0);
    local_124 = 0x18962;
    FUN_10032ba80(&DAT_102312238,&local_124,local_d8);
    local_128 = 0x18a25;
    FUN_10032ba80(&DAT_102312238,&local_128,local_d0);
    local_12c = 0x186b6;
    FUN_10032ba80(&DAT_102312238,&local_12c,local_c8);
  }
  p_Var9 = DAT_102312238;
  if (1 < *(int *)(DAT_102312238 + 0x10) + 1U) {
    LOCK();
    pcVar1 = DAT_102312238 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    local_31 = *(int *)pcVar1 != 0;
    UNLOCK();
  }
  p_Var5 = p_Var9;
  if ((((byte)p_Var9[0x28] & 1) == 0) && (1 < *(uint *)(p_Var9 + 0x10))) {
    p_Var5 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var9,FUN_10032bbf0,0x32bc10,0x10);
    if (*(int *)(p_Var9 + 0x10) != -1) {
      if (*(int *)(p_Var9 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var9 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100329e80;
      }
      QHashData::free_helper((_func_void_Node_ptr *)p_Var9);
    }
  }
LAB_100329e80:
  p_Var9 = p_Var5;
  if (*(uint *)(p_Var5 + 0x20) != 0) {
    for (p_Var6 = *(_func_void_Node_ptr_void_ptr **)
                   (*(long *)(p_Var5 + 8) +
                   ((ulong)(*(uint *)(p_Var5 + 0x24) ^ param_3) % (ulong)*(uint *)(p_Var5 + 0x20)) *
                   8);
        (p_Var9 = p_Var5, p_Var6 != p_Var5 &&
        ((*(uint *)(p_Var6 + 8) != (*(uint *)(p_Var5 + 0x24) ^ param_3) ||
         (p_Var9 = p_Var6, *(uint *)(p_Var6 + 0xc) != param_3))));
        p_Var6 = *(_func_void_Node_ptr_void_ptr **)p_Var6) {
    }
  }
  if (*(int *)(p_Var5 + 0x10) != -1) {
    if (*(int *)(p_Var5 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var5 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100329ef5;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var5);
  }
LAB_100329ef5:
  if ((p_Var9 == p_Var5) && (2 < DAT_10230ffd0)) {
    QString::toUtf8();
    if ((1 < *(uint *)local_140) || (*(long *)(local_140 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_140,*(uint *)(local_140 + 4) + 1,*(uint *)(local_140 + 8) >> 0x1f);
    }
    pQVar3 = local_140;
    lVar2 = *(long *)(local_140 + 0x10);
    uVar7 = FUN_100de8410(param_3);
    uVar8 = CONCAT44(uVar13,param_3);
    FUN_100df99c0("","prl_client_app",3,"%s: received event %s, code = [%u]",pQVar3 + lVar2,uVar7,
                  uVar8);
    uVar13 = (undefined4)((ulong)uVar8 >> 0x20);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100329fc4;
      }
      QArrayData::deallocate(local_140,1,8);
    }
  }
LAB_100329fc4:
  local_144 = 0;
  iVar4 = _PrlHandle_GetType(*param_2,&local_144);
  if (iVar4 < 0) {
    uVar7 = FUN_100dddcf0(iVar4);
    FUN_100df99c0("","prl_client_app",0,"PrlHandle_GetType call error, RC = %.8X [%s]",iVar4,uVar7);
    goto switchD_10032a00e_caseD_18962;
  }
  if (local_144 != 0x10000012) goto switchD_10032a00e_caseD_18962;
  switch(param_3) {
  case 0x1895e:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_80 = (undefined4 *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_80);
    puVar11 = local_80;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x1895e);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x1895e,CONCAT44(uVar13,iVar4),uVar8);
      puVar11 = (undefined4 *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (puVar11 != (undefined4 *)0x0) {
      FUN_10082c2d0(param_1,&local_138,*puVar11);
    }
    break;
  case 0x1895f:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_90 = (undefined8 *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_90);
    puVar12 = local_90;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x1895f);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x1895f,CONCAT44(uVar13,iVar4),uVar8);
      puVar12 = (undefined8 *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (puVar12 != (undefined8 *)0x0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(puVar12 + 1);
      *(undefined8 *)(param_1 + 0x58) = *puVar12;
      FUN_10082c210(param_1,&local_138,*puVar12,*(undefined4 *)(puVar12 + 1));
    }
    break;
  case 0x18960:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_88 = (undefined4 *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_88);
    puVar11 = local_88;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x18960);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x18960,CONCAT44(uVar13,iVar4),uVar8);
      puVar11 = (undefined4 *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (puVar11 != (undefined4 *)0x0) {
      FUN_10082c270(param_1,&local_138,*puVar11);
    }
    break;
  case 0x18961:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_c0 = (undefined4 *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_c0);
    puVar11 = local_c0;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x18961);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x18961,CONCAT44(uVar13,iVar4),uVar8);
      puVar11 = (undefined4 *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (puVar11 == (undefined4 *)0x0) break;
    *(undefined4 *)(param_1 + 0x48) = *puVar11;
    uVar7 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar7 = FUN_100319390(uVar7);
    FUN_10018c650(&local_158,uVar7);
    FUN_10082c030(param_1,&local_158,*puVar11);
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_31 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10032a740;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_10032a740:
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_31 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10032a776;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_10032a776:
    FUN_10082bfd0(param_1,&local_138,*puVar11);
    break;
  case 0x18966:
    FUN_10082c330(param_1,&local_138);
    break;
  case 0x18967:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_78 = (char *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_78);
    pcVar10 = local_78;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x18967);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x18967,CONCAT44(uVar13,iVar4),uVar8);
      pcVar10 = (char *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (pcVar10 == (char *)0x0) break;
    QByteArray::QByteArray
              ((QByteArray *)&local_1c8,pcVar10,
               *(int *)(pcVar10 + 0x10) * *(int *)(pcVar10 + 0x14) * 4 + 0x18);
    local_1d0 = *(undefined8 *)(pcVar10 + 0x10);
    local_1e0 = *(undefined8 *)pcVar10;
    local_1d8 = *(undefined8 *)(pcVar10 + 8);
    local_1e8 = local_1c8;
    if (1 < *(int *)local_1c8 + 1U) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + 1;
      local_31 = *(int *)local_1c8 != 0;
      UNLOCK();
    }
    FUN_10082c380(param_1,&local_138,&local_1e8);
    if (*(int *)local_1e8 != -1) {
      if (*(int *)local_1e8 != 0) {
        LOCK();
        *(int *)local_1e8 = *(int *)local_1e8 + -1;
        local_31 = *(int *)local_1e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10032a8bd;
      }
      QArrayData::deallocate(local_1e8,1,8);
    }
LAB_10032a8bd:
    if (*(int *)local_1c8 != -1) {
      if (*(int *)local_1c8 != 0) {
        LOCK();
        *(int *)local_1c8 = *(int *)local_1c8 + -1;
        local_31 = *(int *)local_1c8 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_1c8,1,8);
    }
    break;
  case 0x18968:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_98 = (undefined4 *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_98);
    puVar11 = local_98;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x18968);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x18968,CONCAT44(uVar13,iVar4),uVar8);
      puVar11 = (undefined4 *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (puVar11 != (undefined4 *)0x0) {
      FUN_10082c1b0(param_1,&local_138,*puVar11);
    }
    break;
  case 0x18969:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_60 = (undefined8 *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_60);
    puVar12 = local_60;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x18969);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x18969,CONCAT44(uVar13,iVar4),uVar8);
      puVar12 = (undefined8 *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (puVar12 == (undefined8 *)0x0) break;
    QByteArray::fromRawData((char *)&local_208,(int)puVar12 + 0xc);
    uVar7 = *puVar12;
    uVar13 = *(undefined4 *)(puVar12 + 1);
    local_210 = local_208;
    if (1 < *(int *)local_208 + 1U) {
      LOCK();
      *(int *)local_208 = *(int *)local_208 + 1;
      local_31 = *(int *)local_208 != 0;
      UNLOCK();
    }
    FUN_10082c550(param_1,&local_138,uVar7,uVar13,&local_210);
    if (*(int *)local_210 != -1) {
      if (*(int *)local_210 != 0) {
        LOCK();
        *(int *)local_210 = *(int *)local_210 + -1;
        local_31 = *(int *)local_210 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10032aa63;
      }
      QArrayData::deallocate(local_210,1,8);
    }
LAB_10032aa63:
    if (*(int *)local_208 != -1) {
      if (*(int *)local_208 != 0) {
        LOCK();
        *(int *)local_208 = *(int *)local_208 + -1;
        local_31 = *(int *)local_208 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_208,1,8);
    }
    break;
  case 0x1896c:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_a0 = (undefined8 *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_a0);
    puVar12 = local_a0;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x1896c);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x1896c,CONCAT44(uVar13,iVar4),uVar8);
      puVar12 = (undefined8 *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (puVar12 != (undefined8 *)0x0) {
      local_1a8 = *(undefined4 *)(puVar12 + 3);
      local_1b0 = puVar12[2];
      local_1c0 = *puVar12;
      local_1b8 = puVar12[1];
      FUN_10082c150(param_1,&local_138);
    }
    break;
  case 0x1896d:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_68 = (char *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_68);
    pcVar10 = local_68;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x1896d);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x1896d,CONCAT44(uVar13,iVar4),uVar8);
      pcVar10 = (char *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (pcVar10 == (char *)0x0) break;
    QByteArray::QByteArray((QByteArray *)&local_1f8,pcVar10,*(int *)(pcVar10 + 0xc));
    uVar7 = *(undefined8 *)pcVar10;
    uVar8 = *(undefined8 *)(pcVar10 + 8);
    local_200 = local_1f8;
    if (1 < *(int *)local_1f8 + 1U) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + 1;
      local_31 = *(int *)local_1f8 != 0;
      UNLOCK();
    }
    FUN_10082c4f0(param_1,&local_138,uVar7,uVar8,&local_200);
    if (*(int *)local_200 != -1) {
      if (*(int *)local_200 != 0) {
        LOCK();
        *(int *)local_200 = *(int *)local_200 + -1;
        local_31 = *(int *)local_200 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10032ac5c;
      }
      QArrayData::deallocate(local_200,1,8);
    }
LAB_10032ac5c:
    if (*(int *)local_1f8 != -1) {
      if (*(int *)local_1f8 != 0) {
        LOCK();
        *(int *)local_1f8 = *(int *)local_1f8 + -1;
        local_31 = *(int *)local_1f8 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_1f8,1,8);
    }
    break;
  case 0x18970:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_58 = (undefined8 *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_58);
    puVar12 = local_58;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x18970);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x18970,CONCAT44(uVar13,iVar4),uVar8);
      puVar12 = (undefined8 *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (puVar12 == (undefined8 *)0x0) break;
    QByteArray::fromRawData((char *)&local_218,(int)puVar12 + 0xc);
    uVar7 = *puVar12;
    uVar13 = *(undefined4 *)(puVar12 + 1);
    local_220 = local_218;
    if (1 < *(int *)local_218 + 1U) {
      LOCK();
      *(int *)local_218 = *(int *)local_218 + 1;
      local_31 = *(int *)local_218 != 0;
      UNLOCK();
    }
    FUN_10082c5b0(param_1,&local_138,uVar7,uVar13,&local_220);
    if (*(int *)local_220 != -1) {
      if (*(int *)local_220 != 0) {
        LOCK();
        *(int *)local_220 = *(int *)local_220 + -1;
        local_31 = *(int *)local_220 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10032ad87;
      }
      QArrayData::deallocate(local_220,1,8);
    }
LAB_10032ad87:
    if (*(int *)local_218 != -1) {
      if (*(int *)local_218 != 0) {
        LOCK();
        *(int *)local_218 = *(int *)local_218 + -1;
        local_31 = *(int *)local_218 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_218,1,8);
    }
    break;
  case 0x18971:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_50 = (undefined8 *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_50);
    puVar12 = local_50;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x18971);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x18971,CONCAT44(uVar13,iVar4),uVar8);
      puVar12 = (undefined8 *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (puVar12 != (undefined8 *)0x0) {
      FUN_10082c610(param_1,&local_138,*puVar12);
    }
    break;
  case 0x18972:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_a8 = (undefined8 *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_a8);
    puVar12 = local_a8;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x18972);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x18972,CONCAT44(uVar13,iVar4),uVar8);
      puVar12 = (undefined8 *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (puVar12 != (undefined8 *)0x0) {
      local_188 = *(undefined4 *)(puVar12 + 3);
      local_190 = puVar12[2];
      local_1a0 = *puVar12;
      local_198 = puVar12[1];
      FUN_10082c0f0(param_1,&local_138);
    }
    break;
  case 0x18974:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_b0 = (undefined8 *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_b0);
    puVar12 = local_b0;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x18974);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x18974,CONCAT44(uVar13,iVar4),uVar8);
      puVar12 = (undefined8 *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (puVar12 != (undefined8 *)0x0) {
      local_170 = *(undefined4 *)(puVar12 + 2);
      local_180 = *puVar12;
      local_178 = puVar12[1];
      FUN_10082c090(param_1,&local_138);
    }
    break;
  case 0x18976:
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",3,"Got PET_IO_TOOLS_LANGUAGE_HOTKEY_CHANGED event");
    }
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_48 = (undefined8 *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_48);
    puVar12 = local_48;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x18976);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x18976,CONCAT44(uVar13,iVar4),uVar8);
      puVar12 = (undefined8 *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (puVar12 != (undefined8 *)0x0) {
      FUN_10082c430(param_1,&local_138,*puVar12);
    }
    break;
  case 0x18977:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_40 = (undefined4 *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_40);
    puVar11 = local_40;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x18977);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x18977,CONCAT44(uVar13,iVar4),uVar8);
      puVar11 = (undefined4 *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (puVar11 != (undefined4 *)0x0) {
      FUN_10082c490(param_1,&local_138,*puVar11);
    }
    break;
  case 0x18981:
    FUN_10082c670(param_1,&local_138,*param_2);
    break;
  case 0x18982:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_70 = (undefined4 *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_70);
    puVar11 = local_70;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x18982);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x18982,CONCAT44(uVar13,iVar4),uVar8);
      puVar11 = (undefined4 *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    if (puVar11 != (undefined4 *)0x0) {
      local_1f0 = *puVar11;
      local_1ec = puVar11[1];
      FUN_10082c3e0(param_1,&local_1f0);
    }
    break;
  case 0x18984:
    lVar2 = *param_2;
    if (lVar2 != 0) {
      _PrlHandle_AddRef(lVar2);
    }
    local_b8 = (undefined8 *)0x0;
    iVar4 = _PrlEvent_GetDataPtr(lVar2,&local_b8);
    puVar12 = local_b8;
    if (iVar4 < 0) {
      uVar7 = FUN_100de8410(0x18984);
      uVar8 = FUN_100dddcf0(iVar4);
      FUN_100df99c0("","prl_client_app",0,
                    "PrlEvent_GetDataPtr call error for event \'%s\'(%d), RC = %.8X [%s]",uVar7,
                    0x18984,CONCAT44(uVar13,iVar4),uVar8);
      puVar12 = (undefined8 *)0x0;
    }
    if (lVar2 != 0) {
      _PrlHandle_Free(lVar2);
    }
    QByteArray::QByteArray((QByteArray *)&local_160,(char *)(puVar12 + 2),*(int *)(puVar12 + 1));
    uVar7 = *puVar12;
    uVar8 = puVar12[1];
    local_168 = local_160;
    if (1 < *(int *)local_160 + 1U) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + 1;
      local_31 = *(int *)local_160 != 0;
      UNLOCK();
    }
    FUN_10082c6d0(param_1,uVar7,uVar8,&local_168);
    if (*(int *)local_168 != -1) {
      if (*(int *)local_168 != 0) {
        LOCK();
        *(int *)local_168 = *(int *)local_168 + -1;
        local_31 = *(int *)local_168 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10032b1a7;
      }
      QArrayData::deallocate(local_168,1,8);
    }
LAB_10032b1a7:
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_31 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_31) break;
      }
      QArrayData::deallocate(local_160,1,8);
    }
  }
switchD_10032a00e_caseD_18962:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      UNLOCK();
      if (*(int *)local_138 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_138,2,8);
  }
  return;
}

