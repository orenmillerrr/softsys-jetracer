from setuptools import find_packages
from setuptools import setup

setup(
    name='softsys_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('softsys_msgs', 'softsys_msgs.*')),
)
