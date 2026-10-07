
void _xmlParserError(void *ctx,char *msg,...)

{
  byte in_AL;
  
                    /* WARNING: Could not recover jumptable at 0x00010013e7f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_10013e818 + (ulong)in_AL * -4))(ctx,msg,&LAB_10013e818 + (ulong)in_AL * -4);
  return;
}

