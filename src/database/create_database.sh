#!/bin/sh
#
# shell script to create catalog database
#
bindir=/usr/bin
db_name=catalog

if $bindir/mysql $* -f <<END-OF-DATA
CREATE DATABASE IF NOT EXISTS ${db_name};
END-OF-DATA
then
   echo "Creation of ${db_name} database succeeded."
else
   echo "Creation of ${db_name} database failed."
fi
exit 0