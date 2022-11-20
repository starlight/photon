/* Generated from core/parse.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0 (rev e31bbee5)
   freebsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: core/parse.scm -output-file parse.c -static -emit-all-import-libraries -unit parse -emit-link-file parse.link
   unit: parse
   uses: eval utf8-srfi-14 utf8-srfi-13 utf8 comparse library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_utf8_2dsrfi_2d14_toplevel)
C_externimport void C_ccall C_utf8_2dsrfi_2d14_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_utf8_2dsrfi_2d13_toplevel)
C_externimport void C_ccall C_utf8_2dsrfi_2d13_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_utf8_toplevel)
C_externimport void C_ccall C_utf8_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_comparse_toplevel)
C_externimport void C_ccall C_comparse_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[5];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,27),40,112,104,111,116,111,110,46,112,97,114,115,101,35,112,104,111,116,111,110,45,112,97,114,115,101,41,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_168)
static void C_ccall f_168(C_word c,C_word *av) C_noret;
C_noret_decl(f_171)
static void C_ccall f_171(C_word c,C_word *av) C_noret;
C_noret_decl(f_174)
static void C_ccall f_174(C_word c,C_word *av) C_noret;
C_noret_decl(f_177)
static void C_ccall f_177(C_word c,C_word *av) C_noret;
C_noret_decl(f_180)
static void C_ccall f_180(C_word c,C_word *av) C_noret;
C_noret_decl(f_183)
static void C_ccall f_183(C_word c,C_word *av) C_noret;
C_noret_decl(f_185)
static void C_ccall f_185(C_word c,C_word *av) C_noret;
C_noret_decl(C_parse_toplevel)
C_externexport void C_ccall C_parse_toplevel(C_word c,C_word *av) C_noret;

/* k166 */
static void C_ccall f_168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_168,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_171,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k169 in k166 */
static void C_ccall f_171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_171,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_174,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_comparse_toplevel(2,av2);}}

/* k172 in k169 in k166 */
static void C_ccall f_174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_174,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_177,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_utf8_toplevel(2,av2);}}

/* k175 in k172 in k169 in k166 */
static void C_ccall f_177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_177,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_180,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_utf8_2dsrfi_2d13_toplevel(2,av2);}}

/* k178 in k175 in k172 in k169 in k166 */
static void C_ccall f_180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_180,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_183,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_utf8_2dsrfi_2d14_toplevel(2,av2);}}

/* k181 in k178 in k175 in k172 in k169 in k166 */
static void C_ccall f_183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_183,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[2]+1 /* (set! photon.parse#photon-parse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_185,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* photon.parse#photon-parse in k181 in k178 in k175 in k172 in k169 in k166 */
static void C_ccall f_185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_185,c,av);}
C_trace(C_text("core/parse.scm:10: utf8#display"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=lf[4];
tp(3,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_parse_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("parse"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_parse_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(28))){
C_save(t1);
C_rereclaim2(28*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,5);
lf[0]=C_h_intern(&lf[0],5, C_text("parse"));
lf[1]=C_h_intern(&lf[1],13, C_text("photon.parse#"));
lf[2]=C_h_intern(&lf[2],25, C_text("photon.parse#photon-parse"));
lf[3]=C_h_intern(&lf[3],12, C_text("utf8#display"));
lf[4]=C_decode_literal(C_heaptop,C_text("\376B\000\000\020not implemented\012"));
C_register_lf2(lf,5,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_168,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[9] = {
{C_text("f_168:core_2fparse_2escm"),(void*)f_168},
{C_text("f_171:core_2fparse_2escm"),(void*)f_171},
{C_text("f_174:core_2fparse_2escm"),(void*)f_174},
{C_text("f_177:core_2fparse_2escm"),(void*)f_177},
{C_text("f_180:core_2fparse_2escm"),(void*)f_180},
{C_text("f_183:core_2fparse_2escm"),(void*)f_183},
{C_text("f_185:core_2fparse_2escm"),(void*)f_185},
{C_text("toplevel:core_2fparse_2escm"),(void*)C_parse_toplevel},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|safe globals: (photon.parse#photon-parse) 
o|replaced variables: 1 
o|removed binding forms: 8 
o|removed binding forms: 1 
*/
/* end of file */
