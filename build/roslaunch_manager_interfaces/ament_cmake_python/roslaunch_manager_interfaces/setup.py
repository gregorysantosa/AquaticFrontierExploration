from setuptools import find_packages
from setuptools import setup

setup(
    name='roslaunch_manager_interfaces',
    version='0.1.0',
    packages=find_packages(
        include=('roslaunch_manager_interfaces', 'roslaunch_manager_interfaces.*')),
)
