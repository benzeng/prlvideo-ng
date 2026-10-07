
void FUN_100697a60(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  uint param_5)

{
  *param_1 = &PTR_FUN_100bcbdd0;
  param_1[1] = param_2;
  *(uint *)(param_1 + 2) = param_3;
  *(uint *)((long)param_1 + 0x14) = param_5;
  *(uint *)(param_1 + 3) = param_3 / param_5;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = param_4;
  if (param_3 % param_5 != 0) {
    FUN_1008e3970("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 == (m_SizeBytes % m_SizeOfEntry)","StructuredBase.cpp",0x5e,"CBatChunk");
  }
  return;
}

